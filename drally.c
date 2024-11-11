#include "drally.h"
#include "drally_display.h"

#ifdef HOME_SUPPORT
char home_path[128], cfg_path[128], fpath[128];
#endif

#if defined(DR_MULTIPLAYER)
extern __DWORD__ ___19bd60h;
void ___623d4h(void);
#endif

extern void_cb ___2432c8h;

void dRally_Keyboard_init(void);
void ___60466h(int, int);
void ___3e720h(void);
void __VGA3_SETMODE(void);
void dRally_System_init(void);
void dRally_Sound_quit(void);
void dRally_System_clean(void);

static void ___10060h(void){

	printf("\nDeath Rally *** Full Version 1.1\n");
}

static void ___100dch(void){

	__VGA3_SETMODE();
	printf("DEATH RALLY Exit: CTRL+ALT+DEL pressed!\n");
	exit(0x70);
}

int main(int argc, char * argv[]){

#ifdef HOME_SUPPORT
	FILE* fp;
#ifdef MIYOO
	snprintf(home_path, sizeof(home_path), "%s/games/drally/", "/mnt");
	snprintf(cfg_path, sizeof(cfg_path), "%s/games/drally/.config", "/mnt");
#else
	snprintf(home_path, sizeof(home_path), "%s/.config/deathrally/", getenv("HOME"));
	snprintf(cfg_path, sizeof(cfg_path), "%s/.config", getenv("HOME"));
#endif
	if (access( cfg_path, F_OK ) == -1) { mkdir(cfg_path, 0755); }
	if (access( home_path, F_OK ) == -1) { mkdir(home_path, 0755); }
#endif

	dRally_System_init();
#if defined(DR_LETTERBOX)
	dRally_Display_init(W_LETTERBOX);
#else
	dRally_Display_init(W_SHRINK);
#endif // DR_LETTERBOX
	___10060h();
	___60466h(70, 1);
	___2432c8h = &___100dch;
	dRally_Keyboard_init();
	___3e720h();

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) ___623d4h();
#endif

	dRally_Sound_quit();
	dRally_Display_clean();
	dRally_System_clean();

	return 0;
}
