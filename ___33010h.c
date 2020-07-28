#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))

	const char ___106cbh[19][4] = { 
		"TR1","TR2","TR3","TR4","TR5","TR6","TR7","TR8","TR9",
		"TR1","TR2","TR3","TR4","TR5","TR6","TR7","TR8","TR9",
		"TR0" };

	dword ___10718h[4] = { COOXY( 51, 177), COOXY(163, 216), COOXY( 51, 274), COOXY(163, 313) };
	dword ___10728h[4] = { COOXY( 24, 201), COOXY(136, 240), COOXY( 24, 298), COOXY(136, 337) };
	dword ___10738h[4] = { COOXY( 53, 129), COOXY(165, 168), COOXY( 53, 226), COOXY(165, 265) };

	extern byte ___196a74h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10e4h__VESA101h_DefaultScreenBufferA[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a0f8ch[];
	extern byte ___1a0f94h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a0f9ch[];
	extern byte ___196ad4h[];
	extern byte ___1a2011h[];
	extern byte ___196b2ch[];
	extern byte ___1823f8h[];
	extern byte ___1a54d0h[];
	extern byte ___180144h[];
	extern byte ___1a1114h[];
	extern byte ___19bd64h[];
	extern byte ___1a1134h[];
	extern byte ___1de818h[];
	extern byte ___1a1028h[];
	extern byte ___1a1f64h[];
	extern byte ___1a1f65h[];
	extern byte ___1a1f66h[];
	extern byte ___182400h[];
	extern byte ___182410h[];
	extern byte ___19bd64h[];
	extern byte ___1a1134h[];
	extern byte ___1de818h[];
	extern byte ___1a1028h[];
	extern byte ___1a0ef8h[];
	extern byte ___1a0ef9h[];
	extern byte ___1a0efah[];
	extern byte ___1a0efbh[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___182428h[];
	extern byte ___19bd60h[];
	extern byte ___180728h[];
	extern byte ___185a54h[];
	extern byte ___1824ach[];
	extern byte ___182414h[];
	extern byte ___182358h[];
	extern byte ___182360h[];
	extern byte ___182368h[];
	extern byte ___182438h[];
	extern byte ___182440h[];
	extern byte ___1a0fb4h[];
	extern byte ___1a0228h[];
	extern byte ___180724h[];
	extern byte ___1a01e0h[];
	extern byte ___1a0220h[];
	extern byte ___19de70h[];
	extern byte ___1a1100h__VESA101h_DefaultScreenBuffer[];
	extern byte ___196a84h[];
	extern byte ___185a34h[];
	extern byte ___1a1168h[];
	extern byte ___1a1169h[];
	extern byte ___1a116ah[];
	extern byte ___1a116bh[];
	extern byte ___196adch[];
	extern byte ___1a108ch[];
	extern byte ___1a1034h[];
	extern byte ___1a102ch[];
	extern byte ___1a109ch[];
	extern byte ___1a1094h[];
	extern byte ___1a1090h[];
	extern byte ___1a10a8h[];
	extern byte ___1a10a0h[];
	extern byte ___196ab0h[];
	extern byte ___1a0ff4h[];
	extern byte ___1a0224h[];
	extern byte ___196aa4h[];
	extern byte ___1de81ch[];
	extern byte ___1de7d0h[];
	extern byte ___1a01ech[];
	extern byte ___1de7e0h[];
	extern byte ___1a01f0h[];
	extern byte ___1de7e4h[];
	extern byte ___1a01f4h[];
	extern byte ___1de7e8h[];
	extern byte ___1a01f8h[];
	extern byte ___1a01fch[];
	extern byte ___1de800h[];
	extern byte ___1a1ef8h[];
	extern byte ___1de7ech[];
	extern byte ___1de814h[];
	extern byte ___196a94h[];
	extern byte ___185a14h[];
	extern byte ___1de7fch[];
	extern byte ___1a0244h[];
	extern byte ___1de7f0h[];
	extern byte ___1a0240h[];
	extern byte ___1a023ch[];
	extern byte ___1de7f4h[];
	extern byte ___1de7f8h[];
	extern byte ___1a0fb8h[];
	extern byte ___1a020ch[];
	extern byte ___1a0fe0h[];
	extern byte ___1de804h[];
	extern byte ___1de808h[];
	extern byte ___1de80ch[];
	extern byte ___1de7b8h[];
	extern byte ___1de8ach[];
	extern byte ___1de8b0h[];
	extern byte ___1de8b4h[];
	extern byte ___1de900h[];
	extern byte ___1de904h[];
	extern byte ___1de908h[];
	extern byte ___18244ch[];
	extern byte ___19f75ch[];
	extern byte ___2438bch[];
	extern byte ___19f760h[];
	extern byte ___19f764h[];
	extern byte ___2438b8h[];
	extern byte ___2438c0h[];
	extern byte ___1de820h[];
	extern byte ___1a103ch[];
	extern byte CONNECTION_TYPE[];
	extern byte ___1a1ef8h[];
	extern byte ___1de810h[];
	extern byte ___185a18h[];
	extern byte ___196ae8h[];
	extern byte ___196aa0h[];
	extern byte ___196a9ch[];
	extern byte ___196a98h[];
	extern byte ___196aa8h[];
	extern byte ___1a1028h[];
	extern byte ___196aach[];
	extern byte ___1a0214h[];
	extern byte ___1a0218h[];
	extern byte ___243d44h[];
	extern byte ___1a01d4h[];
	extern byte ___1a01d8h[];
	extern byte ___1a01dch[];
	extern byte ___1a01d0h[];
	extern byte ___196af0h[];
	extern byte ___196aech[];
	extern byte ___1a0234h[];
	extern byte ___1de7dch[];
	extern byte ___1a0210h[];
	extern byte ___1a0234h[];
	extern byte ___1a0238h[];
	extern byte ___1de810h[];
	extern byte ___1a022ch[];
	extern byte ___196ab8h[];
	extern byte ___196ad4h[];
	extern byte ___1a116ch[];
	extern byte ___196ad4h[];
	extern byte ___196a80h[];
	extern byte ___1a1f4fh[];
	extern byte ___1a1f4eh[];
	extern byte ___180864h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a1dbah[];
	extern byte ___1a01e0h[];
	extern byte ___1a1dbah[];
	extern byte ___182458h[];
	extern byte ___1a116ch[];
	extern byte ___1a1f63h[];
	extern byte ___1a1f4dh[];
	extern byte ___180130h[];
	extern byte ___182470h[];
	extern byte ___1a2010h[];
	extern byte ___18d492h[];
	extern byte ___1a1dbah[];
	extern byte ___182490h[];
	extern byte ___1a0230h[];
	extern byte ___1de834h[];
	extern byte ___1de78ch[];
	extern byte ___181c9ch[];
	extern byte ___181ca8h[];
	extern byte ___24cc58h[];
	extern byte ___1a1f67h[];
	extern byte ___1a1f68h[];
	extern byte ___1a1f69h[];
	extern byte ___185a20h[];

void * ___3f71ch__allocateMemory(dword size);
void dRally_Memory_free(void *);
void ___23488h_cdecl(dword, dword, dword);
void bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);
void ___12e78h_cdecl(byte *, byte *, const char *, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
int rand_watcom106(void);
dword ___251e8h_cdecl(dword);
void ___3a968h_cdecl(dword);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setMasterVolume(dword vol);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void __WAIT_5(void);
void ___60a84h(void);
dword ___60b60h(dword, dword, dword, dword);
void ___38878h_cdecl(void);
void ___2ab50h(void);
dword ___611c0h(dword A1, dword A2);
void ___3881ch(void);
void ___24ec0h(void);
void ___2fc50h(void);
void ___12200h(void);
void ___12a54h(void);
void ___60719h(void);
void race_main(dword, dword);
void ___60705h(void (*A)(void));
void ___10754h(void);
void ___2ec68h_cdecl(void);
void ___11378h_cdecl(dword A1, dword A2, dword A3);
void dRally_Sound_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);
void dRally_Sound_setMusicVolume(dword vol);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_play(void);
void ___606dfh(void);
void __VESA101_SETMODE(void);
void ___605deh_cdecl(dword, dword);
void ___12940h(void);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___31588h(void);
void ___3892ch_cdecl(dword);
void ___22808h(void);
void ___3deb8h(void);
void ___117d4h(void);
void ___117f4h(void);
void ___3986ch(void);
void ___1e4f8h(void);
void ___3079ch_cdecl(dword);

void ___33010h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xfc];

	eax = A1;

		D(esp+0xc8) = eax;
		ecx = 0x13;
		edi = esp;
		esi = ___106cbh;
		while(ecx--||++ecx){

			D(edi) = D(esi);
			edi += 4;
			esi += 4;
		}
		edi = esp+0x88;
		esi = ___10718h;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		edi = esp+0xa8;
		esi = ___10728h;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		edx = 0;
		edi = esp+0xb8;
		esi = ___10738h;
		D(___196a74h) = edx;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		ecx = 0x4b000;
		esi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		edx = 0x280;
		memcpy(edi, esi, ecx);
		ecx = 0x4b000;
		eax = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = eax;
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = eax;
		memcpy(edi, esi, ecx);
		ecx = 0x36;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0f8ch);
		ebx += 0x42900;
___330dch:
		edi = edx;
___330deh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___330e6h;
		B(ebx) = L(eax);
___330e6h:
		ebx++;
		esi++;
		edi--;
		if(edi != 0) goto ___330deh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx != 0) goto ___330dch;
		ecx = 0x112;
		edx = 0xe1;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0f94h);
		ebx += 0xfa0d;
___33112h:
		edi = edx;
___33114h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___3311ch;
		B(ebx) = L(eax);
___3311ch:
		ebx++;
		esi++;
		edi--;
		if(edi != 0) goto ___33114h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx != 0) goto ___33112h;
		if((int)D(esp+0xc8) >= 4) goto ___3318ch;
		ecx = 0;
		esi = 0;
		D(esp+0xd0) = ecx;
		edi = 2;
___33146h:
		eax = D(esp+0xd0);
		edx = eax;
		edx = (int)edx>>0x1f;
		edx = eax%edi;  // idiv edi
		if((int)edx >= 0x64) goto ___33172h;
		ebx = esi;
___3315bh:
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += 2;
		eax += ebx;
		B(edx+eax+0x28d01) = 0xc4;
		if((int)edx < 0x64) goto ___3315bh;
___33172h:
		eax = D(esp+0xd0);
		eax++;
		esi += 0x280;
		D(esp+0xd0) = eax;
		if((int)eax < 0x5b) goto ___33146h;
___3318ch:
		if((int)D(esp+0xc8) >= 3) goto ___331ech;
		ecx = 0;
		esi = 0;
		D(esp+0xd0) = ecx;
		edi = 2;
___331a6h:
		eax = D(esp+0xd0);
		edx = eax;
		edx = (int)edx>>0x1f;
		edx = eax%edi;  // idiv edi
		if((int)edx >= 0x64) goto ___331d2h;
		ebx = esi;
___331bbh:
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += 2;
		eax += ebx;
		B(edx+eax+0x22b11) = 0xc4;
		if((int)edx < 0x64) goto ___331bbh;
___331d2h:
		eax = D(esp+0xd0);
		eax++;
		esi += 0x280;
		D(esp+0xd0) = eax;
		if((int)eax < 0x5b) goto ___331a6h;



___331ech:
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

			eax = D(___1a1028h);
			L(edx) = !!(B(eax+___1a1f64h) > 8);
			edx &= 0xff;
			D(___1de818h) = edx;

			switch(eax){
			case 0:
				edx = 0;
				L(edx) = B(___1a1f64h);
				eax = 8*edx;
				esi = ___196b2ch;
				eax += edx;
				edi = esp+0x4c;
				esi += eax;
				ebx = esp+0x4c;
				strcpy(edi, esi);
				esi = ___1823f8h;
				edi = esp+0x4c;
				edx = ___1a54d0h;
				strcat(edi, esi);
				eax = ___180144h;
				bpa_read(eax, edx, ebx);
				esi = D(___1a1114h);
				bpk_decode2(esi, ___1a54d0h);
				ecx = 0x112;
				edx = 0x168;
				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				esi = D(___1a1114h);
				ebx += 0xfb08;
				while(1){
					edi = edx;
					while(1){

						L(eax) = B(esi);
						if(L(eax) != 0) B(ebx) = L(eax);
						ebx++;
						esi++;
						edi--;
						if(edi == 0) break;
					}
					ebx += 0x280;
					ebx -= edx;
					ecx--;
					if(ecx == 0) break;
				}
				eax = 0;
				L(eax) = B(___1a1f64h);
				esi = esp;
				eax <<= 2;
				edi = ___19bd64h;
				esi += eax;
				strcpy(edi, esi);
				D(___1a1134h) = 4;
				break;
			case 1:
				edx = 0;
				L(edx) = B(___1a1f65h);
				eax = 8*edx;
				esi = ___196b2ch;
				eax += edx;
				edi = esp+0x4c;
				esi += eax;
				ebx = esp+0x4c;
				strcpy(edi, esi);
				esi = ___1823f8h;
				edi = esp+0x4c;
				edx = ___1a54d0h;
				strcat(edi, esi);
				eax = ___180144h;
				bpa_read(eax, edx, ebx);
				ebx = D(___1a1114h);
				bpk_decode2(ebx, ___1a54d0h);
				ecx = 0x112;
				edx = 0x168;
				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				esi = D(___1a1114h);
				ebx += 0xfb08;
				while(1){
					edi = edx;
					while(1){
						L(eax) = B(esi);
						if(L(eax) != 0) B(ebx) = L(eax);
						ebx++;
						esi++;
						edi--;
						if(edi == 0) break;
					}
					ebx += 0x280;
					ebx -= edx;
					ecx--;
					if(ecx == 0) break;
				}
				eax = 0;
				L(eax) = B(___1a1f65h);
				esi = esp;
				eax <<= 2;
				edi = ___19bd64h;
				esi += eax;
				ecx = 5;
				strcpy(edi, esi);
				D(___1a1134h) = ecx;
				break;
			case 2:
				edx = 0;
				L(edx) = B(___1a1f66h);
				eax = 8*edx;
				esi = ___196b2ch;
				eax += edx;
				edi = esp+0x4c;
				esi += eax;
				ebx = esp+0x4c;
				strcpy(edi, esi);
				esi = ___1823f8h;
				edi = esp+0x4c;
				edx = ___1a54d0h;
				strcat(edi, esi);
				eax = ___180144h;
				bpa_read(eax, edx, ebx);
				eax = D(___1a1114h);
				bpk_decode2(eax, ___1a54d0h);
				ecx = 0x112;
				edx = 0x168;
				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				esi = D(___1a1114h);
				ebx += 0xfb08;
				while(1){
					edi = edx;
					while(1){
						L(eax) = B(esi);
						if(L(eax) != 0) B(ebx) = L(eax);
						ebx++;
						esi++;
						edi--;
						if(edi == 0) break;
					}
					ebx += 0x280;
					ebx -= edx;
					ecx--;
					if(ecx == 0) break;
				}
				eax = 0;
				L(eax) = B(___1a1f66h);
				esi = esp;
				eax <<= 2;
				edi = ___19bd64h;
				esi += eax;
				edx = 6;
				strcpy(edi, esi);
				D(___1a1134h) = edx;
				break;
			case 3:
				edi = esp+0x4c;
				ebx = esp+0x4c;
				esi = ___182400h;
				edx = ___1a54d0h;
				eax = ___180144h;
				D(edi) = D(esi); edi += 4; esi += 4;
				D(edi) = D(esi); edi += 4; esi += 4;
				D(edi) = D(esi); edi += 4; esi += 4;
				B(edi++) = B(esi++);   
				bpa_read(eax, edx, ebx);
				ecx = D(___1a1114h);
				bpk_decode2(ecx, ___1a54d0h);
				ecx = 0x112;
				edx = 0x168;
				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				esi = D(___1a1114h);
				ebx += 0xfb08;
				while(1){
					edi = edx;
					while(1){
						L(eax) = B(esi);
						if(L(eax) != 0) B(ebx) = L(eax);
						ebx++;
						esi++;
						edi--;
						if(edi == 0) break;
					}
					ebx += 0x280;
					ebx -= edx;
					ecx--;
					if(ecx == 0) break;
				}
				esi = 9;
				eax = D(___182410h);
				edi = 0;
				D(___19bd64h) = eax;
				D(___1a1134h) = esi;
				D(___1de818h) = edi;
				break;
			default:
				break;
			}

			edx = D(___1a1028h);
			L(eax) = B(edx*4+___1a0ef8h);
			B(esp+0xcc) = L(eax);
			L(eax) = B(edx*4+___1a0ef9h);
			B(esp+0xcd) = L(eax);
			L(eax) = B(edx*4+___1a0efah);
			B(esp+0xce) = L(eax);
			L(eax) = B(edx*4+___1a0efbh);
			B(esp+0xcf) = L(eax);
			if(edx == 3){
				
				L(eax) = B(___1a1ef8h);
				B(esp+0xcc) = L(eax);
				B(esp+0xcd) = L(eax);
			}
#if defined(DR_MULTIPLAYER)
		}
		else {

			L(ecx) = 2;
			L(ebx) = 0;
			eax = 4;
			B(esp+0xcc) = L(ebx);
			B(esp+0xce) = L(ecx);
			H(ebx) = 1;
			H(ecx) = 3;
			B(esp+0xcd) = H(ebx);
			B(esp+0xcf) = H(ecx);
			eax = ___3f71ch__allocateMemory(eax);
			L(edx) = B(___1a1ef8h);
			ebx = 0x13;
			B(eax) = L(edx);
			edx = 1;
			D(___1a0f9ch) = eax;
			___23488h_cdecl(eax, edx, ebx);
			eax = D(___1a0f9ch);
			dRally_Memory_free(eax);
			eax = D(___196ad4h);
			edx = 0;
			L(edx) = B(eax+___1a2011h);
			eax = 8*edx;
			esi = ___196b2ch;
			eax += edx;
			edi = esp+0x4c;
			esi += eax;
			ebx = esp+0x4c;
			strcpy(edi, esi);
			esi = ___1823f8h;
			edi = esp+0x4c;
			edx = ___1a54d0h;
			strcat(edi, esi);
			eax = ___180144h;
			bpa_read(eax, edx, ebx);
			edx = D(___1a1114h);
			bpk_decode2(edx, ___1a54d0h);
			ecx = 0x112;
			edx = 0x168;
			ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
			esi = D(___1a1114h);
			ebx += 0xfb08;

			while(1){

				edi = edx;

				while(1){

					L(eax) = B(esi);
					if(L(eax) != 0) B(ebx) = L(eax);
					ebx++;
					esi++;
					edi--;
				
					if(edi == 0) break;
				}

				ebx += 0x280;
				ebx -= edx;
				ecx--;
			
				if(ecx == 0) break;
			}

			eax = D(___196ad4h);
			L(eax) = B(eax+___1a2011h);
			eax &= 0xff;
			esi = esp;
			eax <<= 2;
			edi = ___19bd64h;
			esi += eax;
			strcpy(edi, esi);
			eax = D(___196ad4h);
			ebx = 5;
			L(edx) = B(eax+___1a2011h);
			D(___1a1134h) = ebx;

			if(L(edx) <= 8){

				ecx = 0;
				D(___1de818h) = ecx;
			}
			else {

				D(___1de818h) = 1;
			}
		}
#endif // DR_MULTIPLAYER

		edi = esp+0x4c;
		ebx = 0xa;
		esi = ___182414h;
		edx = esp+0x74;
		eax = D(___1a1134h);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		B(edi++) = B(esi++);   
		eax = itoa_watcom106(eax, edx, ebx);
		esi = esp+0x74;
		edi = esp+0x4c;
		ebx = esp+0x4c;
		edx = ___185c7ah;
		strcat(edi, esi);
		ecx = 0x3800d;
		edi = esp+0x4c;
		eax = D(___1a10b8h);
		esi = ___182428h;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;   
		if(D(___19bd60h) == 0) goto ___33845h;
		esi = ___180728h;
		edi = esp+0x4c;
		strcat(edi, esi);
		D(esp+0xd4) = 3*D(___185a54h)/10;
		ebx = 0xa;
		edx = esp+0x74;
		esi = esp+0x74;
		eax = D(esp+0xd4);
		edi = esp+0x4c;
		eax = itoa_watcom106(eax, edx, ebx);
		goto ___338f3h;
___33845h:
		if(D(___1a1028h) != 0) goto ___33879h;
		esi = ___182358h;
		edi = esp+0x4c;
		strcat(edi, esi);
___33879h:
		if(D(___1a1028h) != 1) goto ___338adh;
		esi = ___182360h;
		edi = esp+0x4c;
		strcat(edi, esi);
___338adh:
		if(D(___1a1028h) != 2) goto ___338e1h;
		esi = ___182368h;
		edi = esp+0x4c;
		strcat(edi, esi);
___338e1h:
		if(D(___1a1028h) != 3) goto ___33915h;
		esi = ___182438h;
		edi = esp+0x4c;
___338f3h:
		strcat(edi, esi);
___33915h:
		eax = esp+0x4c;
		ecx = 0x3816b;
		ebx = esp+0x4c;
		edx = ___185c7ah;
		eax = ___251e8h_cdecl(eax);
		ecx -= eax;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		if(D(___1a1028h) != 3) goto ___33af9h;
		edi = esp+0x4c;
		eax = esp+0x4c;
		esi = ___182440h;
		ebx = esp+0x4c;
		edx = ___185c7ah;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;   
		eax = strupr_watcom106(eax);
		ecx = D(esp+0xa8);
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(esp+0xb8);
		ecx = 0x40;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0fb4h);
		ebx += edx;
		edx = ecx;
		L(edx) >>= 2;
___33994h:
		H(ecx) = L(edx);
___33996h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx) != 0) goto ___33996h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) != 0) goto ___33994h;
		edx = 0;
		L(edx) = B(esp+0xcc);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		edi = esp+0x4c;
		eax -= edx;
		ebx = 0xa;
		edx = esp+0x4c;
		eax = D(eax*4+___1a0228h);
		esi = ___180724h;
		eax = itoa_watcom106(eax, edx, ebx);
		strcat(edi, esi);
		eax = esp+0x4c;
		ebx = esp+0x4c;
		eax = ___251e8h_cdecl(eax);
		ecx = D(esp+0x8c);
		edx = ___185c7ah;
		ecx -= eax;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = 0;
		L(edx) = B(esp+0xcc);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		esi = ___1a01e0h;
		eax <<= 2;
		edi = esp+0x4c;
		esi += eax;
		ebx = esp+0x4c;
		strcpy(edi, esi);
		eax = esp+0x4c;
		edx = ___185c7ah;
		eax = strupr_watcom106(eax);
		ecx = D(esp+0xac);
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = 0;
		L(edx) = B(esp+0xcc);
		eax = 8*edx;
		eax -= edx;
		ecx = D(esp+0xbc);
		eax <<= 2;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax -= edx;
		ebx += ecx;
		ecx = 0x40;
		esi = D(eax*4+___1a0220h);
		edx = ecx;
		esi = D(esi*4+___19de70h);
		L(edx) >>= 2;
___33ad2h:
		H(ecx) = L(edx);
___33ad4h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx) != 0) goto ___33ad4h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) != 0) goto ___33ad2h;
		goto ___33c89h;
___33af9h:
		edi = 0;
		eax = D(esp+0xc8);
		D(esp+0xd0) = edi;
		if((int)eax <= 0) goto ___33c89h;
		D(esp+0xf4) = edi;
___33b18h:
		edx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+edx+0xcc);
		eax = 0x6c*eax;
		ebx = 0xa;
		esi = ___180724h;
		edx = esp+0x4c;
		eax = D(eax+___1a0228h);
		edi = esp+0x4c;
		eax = itoa_watcom106(eax, edx, ebx);
		strcat(edi, esi);
		eax = esp+0x4c;
		ecx = D(esp+0xf4);
		ebx = esp+0x4c;
		eax = ___251e8h_cdecl(eax);
		ecx = D(esp+ecx+0x88);
		edx = ___185c7ah;
		ecx -= eax;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+edx+0xcc);
		eax = 0x6c*eax;
		esi = ___1a01e0h;
		edi = esp+0x4c;
		ecx = D(esp+0xf4);
		esi += eax;
		ebx = esp+0x4c;
		strcpy(edi, esi);
		eax = esp+0x4c;
		edx = ___185c7ah;
		eax = strupr_watcom106(eax);
		eax = D(___1a10b8h);
		ecx = D(esp+ecx+0xa8);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		eax = D(esp+0xf4);
		edx = D(esp+0xd0);
		edi = D(esp+eax+0xb8);
		eax = 0;
		L(eax) = B(esp+edx+0xcc);
		eax = 0x6c*eax;
		ecx = 0x40;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(eax+___1a0220h);
		ebx += edi;
		edx = ecx;
		esi = D(esi*4+___19de70h);
		L(edx) >>= 2;
___33c38h:
		H(ecx) = L(edx);
___33c3ah:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx) != 0) goto ___33c3ah;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) != 0) goto ___33c38h;
		eax = D(esp+0xf4);
		edx = D(esp+0xd0);
		ebx = D(esp+0xc8);
		eax += 4;
		edx++;
		D(esp+0xf4) = eax;
		D(esp+0xd0) = edx;
		if((int)edx < (int)ebx) goto ___33b18h;
___33c89h:
		eax = D(___1a1100h__VESA101h_DefaultScreenBuffer);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = eax;
		eax = 0xffffffff;
		___3a968h_cdecl(eax);
		if(D(___19bd60h) == 0) goto ___33cadh;
		eax = 0x1e00;
		goto ___33cb2h;
___33cadh:
		eax = 0x2800;
___33cb2h:
		dRally_Sound_setPosition(eax);
		eax = 0x10000;
		dRally_Sound_setMasterVolume(eax);
		___12cb8h__VESA101_PRESENTSCREEN();
		__WAIT_5();
		if(D(___19bd60h) == 0) goto ___33e7eh;
		if(D(___196a84h) == 0) goto ___33ce6h;
		D(___185a34h) = 1;
___33ce6h:
		edx = D(___196a84h);
		if(edx != 0) goto ___33e7eh;
		L(edx) = B(___1a1168h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = ___1a01e0h;
		eax <<= 2;
		edx += eax;
		D(esp+0x98) = edx;
		edx = 0;
		L(edx) = B(___1a1169h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = ___1a01e0h;
		eax <<= 2;
		edx += eax;
		D(esp+0x9c) = edx;
		edx = 0;
		L(edx) = B(___1a116ah);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = ___1a01e0h;
		eax <<= 2;
		edx += eax;
		D(esp+0xa0) = edx;
		edx = 0;
		L(edx) = B(___1a116bh);
		eax = 8*edx;
		eax -= edx;
		ebx = 0;
		eax <<= 2;
		esi = 0;
		eax -= edx;
		edx = ___1a01e0h;
		eax <<= 2;
		D(esp+0xd0) = ebx;
		edx += eax;
		eax = 4;
		D(esp+0xa4) = edx;
		eax = ___3f71ch__allocateMemory(eax);
		L(edx) = B(___1a1ef8h);
		D(___1a0f9ch) = eax;
		B(eax) = L(edx);
		___60a84h();
		edi = 1;
___33dbah:
		if(D(___196a84h) != 0) goto ___33e4ah;
		___38878h_cdecl();
		___2ab50h();
		___2ab50h();
		ebx = 0xa;
		edx = esi;
		eax = esi;
		edx = (int)edx>>0x1f;
		edx = eax%ebx;  // idiv ebx
		if(edx != 1) goto ___33e0fh;
		ebx = 0x6c*D(___1a1ef8h);
		ecx = 0x6c;
		edx = D(___196adch);
		ebx = ebx+___1a01e0h;
		eax = edi;
		eax = ___60b60h(eax, edx, ebx, ecx);
		D(esp+0xd0) = eax;
___33e0fh:
		ebx = 0x384;
		edx = esi;
		eax = esi;
		edx = (int)edx>>0x1f;
		edx = eax%ebx;  // idiv ebx
		if(edx != 0x383) goto ___33e36h;
		ebx = 0x13;
		eax = D(___1a0f9ch);
		edx = edi;
		___23488h_cdecl(eax, edx, ebx);
___33e36h:
		edx = D(esp+0xd0);
		esi++;
		if(edx != 0xff) goto ___33dbah;
___33e4ah:
		edx = esp+0x98;
		eax = 0x6c;
		ebx = D(esp+0xd0);
		eax = ___611c0h(eax, edx);
		if(ebx != 0xff)  goto ___33e6fh;
		___3881ch();
___33e6fh:
		___12cb8h__VESA101_PRESENTSCREEN();
		eax = D(___1a0f9ch);
		dRally_Memory_free(eax);
___33e7eh:
		if(D(___196a84h) == 0) goto ___33e91h;
		D(___185a34h) = 1;
___33e91h:
		edi = D(___196a84h);
		if(edi != 0) return;
		ecx = D(___1a1ef8h);
		D(___1a108ch) = edi;
		D(___1a1034h) = edi;
		D(___1a102ch) = edi;
		D(___1a109ch) = edi;
		D(___1a1094h) = edi;
		D(___1a1090h) = edi;
		D(___1a10a8h) = edi;
		D(___1a10a0h) = edi;
		D(___196ab0h) = edi;
		D(esp+0xd0) = edi;
		D(___1a0ff4h) = edi;
		edx = 0;
		eax = 0;
___33eech:
		edi = D(eax+___1a0224h);
		if((int)edx >= (int)edi) goto ___33f01h;
		if(ecx == D(esp+0xd0)) goto ___33f01h;
		edx = edi;
___33f01h:
		esi = D(esp+0xd0);
		esi++;
		eax += 0x6c;
		D(esp+0xd0) = esi;
		if((int)esi < 0x14) goto ___33eech;
		if(D(___19bd60h) != 0) goto ___33f36h;
		if((int)D(___196aa4h) <= 0) goto ___33f36h;
		D(___1de81ch) = 1;
		goto ___33f3eh;
___33f36h:
		ebx = 0;
		D(___1de81ch) = ebx;
___33f3eh:
		esi = 0;
		edi = D(esp+0xc8);
		D(esp+0xd0) = esi;
		if((int)edi <= 0) goto ___341cfh;
		ecx = ___1de7d0h;
		ebx = 0;
___33f5dh:
		esi = D(esp+0xd0);
		esi = B(esp+esi+0xcc);
		esi = 0x6c*esi;
		edi = ecx;
		esi = esi+___1a01e0h;
		strcpy(edi, esi);
		eax = ecx;
		eax = strupr_watcom106(eax);
		eax = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+eax+0xcc);
		eax = 0x6c*edx;
		esi = D(eax+___1a01ech);
		D(ebx+___1de7e0h) = esi;
		esi = D(eax+___1a01f0h);
		D(ebx+___1de7e4h) = esi;
		esi = D(eax+___1a01f4h);
		D(ebx+___1de7e8h) = esi;
		esi = D(eax+___1a01f8h);
		eax = D(eax+___1a01fch);
		D(ebx+___1de800h) = eax;
		eax = D(___1a1ef8h);
		D(ebx+___1de7ech) = esi;
		if(edx != eax) goto ___33ffch;
		D(ebx+___1de814h) = 3;
		goto ___34007h;
___33ffch:
		eax = D(___196a94h);
		D(ebx+___1de814h) = eax;
___34007h:
		eax = D(___185a14h);
		D(ebx+___1de7fch) = eax;
		eax = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+eax+0xcc);
		eax = 0x6c*edx;
		esi = D(eax+___1a0244h);
		D(ebx+___1de7f0h) = esi;
		esi = D(eax+___1a0240h);
		eax = D(eax+___1a023ch);
		D(ebx+___1de7f4h) = esi;
		esi = D(___1a1ef8h);
		D(ebx+___1de7f8h) = eax;
		if(edx == esi) goto ___340efh;
		edi = D(___19bd60h);
		if(edi != 0) goto ___340efh;
		D(ebx+___1de7f8h) = edi;
		D(ebx+___1de7f4h) = edi;
		D(ebx+___1de7f0h) = edi;
		eax = rand_watcom106();
		edx = eax;
		esi = 5;
		edx = (int)edx>>0x1f;
		edx = eax%esi;  // idiv esi
		if(edx != 0) goto ___3409fh;
		if(D(___185a14h) == 0) goto ___3409fh;
		D(ebx+___1de7f0h) = 1;
___3409fh:
		eax = rand_watcom106();
		edx = eax;
		esi = 5;
		edx = (int)edx>>0x1f;
		edx = eax%esi;  // idiv esi
		if(edx != 0) goto ___340c7h;
		if(D(___185a14h) == 0) goto ___340c7h;
		D(ebx+___1de7f4h) = 1;
___340c7h:
		eax = rand_watcom106();
		edx = eax;
		esi = 5;
		edx = (int)edx>>0x1f;
		edx = eax%esi;  // idiv esi
		if(edx != 0) goto ___340efh;
		if(D(___185a14h) == 0) goto ___340efh;
		D(ebx+___1de7f8h) = 8;
___340efh:
		edx = D(esp+0xd0);
		eax = 0;
		edi = D(___1a1ef8h);
		L(eax) = B(esp+edx+0xcc);
		if(eax == edi) goto ___34112h;
		if(D(___19bd60h) == 0) goto ___34132h;
___34112h:
		edx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+edx+0xcc);
		eax = 0x6c*eax;
		edx = D(eax+___1a020ch);
		eax = D(___1a0fb8h);
		goto ___34140h;
___34132h:
		eax = 0x6c*eax;
		edx = D(eax+___1a020ch);
		eax = D(___1a0fe0h);
___34140h:
		edx = edx*3;
		eax += edx;
		edx = 0;
		L(edx) = B(eax);
		D(ebx+___1de804h) = edx;
		edx = 0;
		L(edx) = B(eax+1);
		D(ebx+___1de808h) = edx;
		L(eax) = B(eax+2);
		eax &= 0xff;
		D(ebx+___1de80ch) = eax;

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			eax = D(___196adch);
			edi = D(esp+0xd0);
			eax--;

			if((int)eax < (int)edi){

				eax = D(___1a0fe0h);
				edx = 0;
				L(edx) = B(eax+0x1e);
				D(ebx+___1de804h) = edx;
				edx = 0;
				L(edx) = B(eax+0x1f);
				D(ebx+___1de808h) = edx;
				L(eax) = B(eax+0x20);
				eax &= 0xff;
				D(ebx+___1de80ch) = eax;
			}
		}
#endif // DR_MULTIPLAYER

		eax = D(esp+0xd0);
		edx = D(esp+0xc8);
		ebx += 0x54;
		eax++;
		ecx += 0x54;
		D(esp+0xd0) = eax;
		if((int)eax < (int)edx) goto ___33f5dh;
___341cfh:

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			eax = D(esp+0xc8);
			D(esp+0xd0) = eax;

			if((int)eax < 4){

				edx = eax;
				eax <<= 2;
				eax += edx;
				eax <<= 2;
				eax += edx;
				eax <<= 2;

				while(1){

					edx = D(___1a0fe0h);
					ebx = 0;
					L(ebx) = B(edx+0x1e);
					D(eax+___1de804h) = ebx;
					ebx = 0;
					L(ebx) = B(edx+0x1f);
					D(eax+___1de808h) = ebx;
					L(edx) = B(edx+0x20);
					esi = D(esp+0xd0);
					eax += 0x54;
					edx &= 0xff;
					esi++;
					D(eax+___1de7b8h) = edx;
					D(esp+0xd0) = esi;

					if((int)eax >= 0x150) break;
				}
			}
		}
#endif // DR_MULTIPLAYER

		edx = 0;
		eax = D(esp+0xc8);
		D(esp+0xd0) = edx;
		if((int)eax <= 0) goto ___3428eh;
		edi = D(esp+0xc8);
		ecx = D(___1a1ef8h);
		eax = 0;
___34261h:
		if((int)edx >= (int)D(eax+___1a0224h)) goto ___34278h;
		if(ecx == D(esp+0xd0)) goto ___34278h;
		edx = D(eax+___1a0224h);
___34278h:
		esi = D(esp+0xd0);
		esi++;
		eax += 0x6c;
		D(esp+0xd0) = esi;
		if((int)esi < (int)edi) goto ___34261h;
___3428eh:
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		if((int)edx >= (int)D(eax*4+___1a0224h)) goto ___3435fh;
		ecx = D(___19bd60h);
		if(ecx != 0) goto ___3435fh;
		edi = ___1de7d0h;
		esi = ___18244ch;
		ebx = 1;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;   
		eax = D(___196a94h);
		edi = 6;
		D(___1de814h) = eax;
		D(___1de7e0h) = ecx;
		D(___1de7f0h) = ecx;
		D(___1de7f4h) = ebx;
		ecx = D(___185a14h);
		D(___1de800h) = edi;
		if(ecx == 0) goto ___3430dh;
		D(___1de7f8h) = 8;
		goto ___34313h;
___3430dh:
		D(___1de7f8h) = ecx;
___34313h:
		eax = D(___185a14h);
		D(___1de7fch) = eax;
		eax = D(___1a0fe0h);
		ebx = 0;
		L(ebx) = B(eax+0x1e);
		D(___1de8ach) = ebx;
		ebx = 0;
		L(ebx) = B(eax+0x1f);
		D(___1de8b0h) = ebx;
		L(eax) = B(eax+0x20);
		eax &= 0xff;
		D(___1de8b4h) = eax;
		eax = D(___1de8ach);
		D(___1de900h) = eax;
		eax = D(___1de8b4h);
		D(___1de904h) = ebx;
		D(___1de908h) = eax;
___3435fh:
		ebx = D(___1a1ef8h);
		ecx = 8*ebx;
		ecx -= ebx;
		ecx <<= 2;
		ecx -= ebx;
		ecx <<= 2;
		ebx = D(ecx+___1a01fch);
		edi = 8*ebx;
		edi -= ebx;
		edi <<= 2;
		esi = D(___1a1028h);
		edi -= ebx;
		ebx = 0;
		L(ebx) = B(esi+___1a1f64h);
		eax = 4*ebx;
		edi <<= 4;
		eax -= ebx;
		ebx = D(edi+8*eax+___19f75ch);
		D(___2438bch) = ebx;
		ebx = D(edi+8*eax+___19f760h);
		eax = D(edi+8*eax+___19f764h);
		D(___2438b8h) = ebx;
		D(___2438c0h) = eax;
		eax = 0;
		ebx = D(___19bd60h);
		D(___1de820h) = eax;
		if(ebx != 0) goto ___3452ch;
		if((int)edx < (int)D(ecx+___1a0224h)) goto ___3452ch;
		if(esi == 0) D(___1de820h) = 0x32;
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		eax <<= 2;
		ebx = D(eax+___1a0228h);
		if((int)ebx <= 0) goto ___34445h;
		if((int)ebx >= 6) goto ___34445h;
		if(D(___1a1028h) == 1) D(___1de820h) = 0x104;
		if(D(___1a1028h) != 2) goto ___34445h;
		D(___1de820h) = 0x1f4;
___34445h:
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		eax <<= 2;
		ecx = D(eax+___1a0228h);
		if((int)ecx <= 5) goto ___34492h;
		if((int)ecx >= 0xb) goto ___34492h;
		if(D(___1a1028h) == 1) D(___1de820h) = 0xc8;
		if(D(___1a1028h) != 2) goto ___34492h;
		D(___1de820h) = 0x12c;
___34492h:
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		eax <<= 2;
		esi = D(eax+___1a0228h);
		if((int)esi <= 0xa) goto ___344dfh;
		if((int)esi >= 0x10) goto ___344dfh;
		if(D(___1a1028h) == 1) D(___1de820h) = 0x78;
		if(D(___1a1028h) != 2) goto ___344dfh;
		D(___1de820h) = 0x96;
___344dfh:
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		eax <<= 2;
		edi = D(eax+___1a0228h);
		if((int)edi <= 0xf) goto ___3452ch;
		if((int)edi >= 0x15) goto ___3452ch;
		if(D(___1a1028h) == 1) D(___1de820h) = 0x3c;
		if(D(___1a1028h) != 2) goto ___3452ch;
		D(___1de820h) = 0x50;
___3452ch:

#if defined(DR_MULTIPLAYER)	
		if(D(___19bd60h) != 0) D(___1de820h) = D(___185a54h)/0x32;

		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

			ebx = D(___1a1ef8h);
			eax = 8*ebx;
			eax -= ebx;
			eax <<= 2;
			eax -= ebx;
			if((int)edx < (int)D(4*eax+___1a0224h)) D(___1de820h) = 0x190;
#if defined(DR_MULTIPLAYER)	
		}
#endif // DR_MULTIPLAYER

		___12200h();
		___12a54h();
		___24ec0h();
		___2fc50h();

#if defined(DR_MULTIPLAYER)	
		if(D(___19bd60h) != 0){
		
			D(___1a103ch) = D(___1a1ef8h);

			if(D(CONNECTION_TYPE) == 2) ___60719h();
		}
#endif // DR_MULTIPLAYER

		race_main(D(___1a103ch), D(esp+0xc8));

#if defined(DR_MULTIPLAYER)	
		if((D(___19bd60h) != 0)&&(D(CONNECTION_TYPE) == 2)) ___60705h(___10754h);
#endif // DR_MULTIPLAYER

		edx = D(___1a103ch);
		eax = 4*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		ecx = D(___1a1ef8h);
		eax = D(eax*4+___1de810h);
		edx = 0;
		D(___185a18h) = eax;
		D(___196ae8h) = eax;
		D(esp+0xd0) = edx;
		eax = 0;
___3461dh:
		if((int)edx >= (int)D(eax+___1a0224h)) goto ___34634h;
		if(ecx == D(esp+0xd0)) goto ___34634h;
		edx = D(eax+___1a0224h);
___34634h:
		esi = D(esp+0xd0);
		esi++;
		eax += 0x6c;
		D(esp+0xd0) = esi;
		if((int)esi < 0x14) goto ___3461dh;
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		if((int)edx >= (int)D(eax*4+___1a0224h)) goto ___34675h;
		if(D(___19bd60h) == 0) goto ___34826h;
___34675h:
		eax = 0;
		edi = D(esp+0xc8);
		D(esp+0xd0) = eax;
		if((int)edi <= 0) goto ___346c1h;
		edx = 0;
___3468bh:
		ebx = D(esp+0xd0);
		if(ebx == D(___1a103ch)) goto ___346a4h;
		if(D(edx+___1de7e0h) != 0x64) goto ___346a4h;
		eax++;
___346a4h:
		edi = D(esp+0xd0);
		ecx = D(esp+0xc8);
		edi++;
		edx += 0x54;
		D(esp+0xd0) = edi;
		if((int)edi < (int)ecx) goto ___3468bh;
___346c1h:
		edx = D(esp+0xc8);
		edx--;
		if(eax != edx) goto ___346f5h;
		ebx = D(___1a103ch);
		edx = ebx*4;
		edx += ebx;
		edx <<= 2;
		edx += ebx;
		if((int)D(edx*4+___1de7e0h) >= 0x64) goto ___346f5h;
		D(___196aa0h) = 1;
___346f5h:
		ebx = D(___1a103ch);
		edx = ebx*4;
		edx += ebx;
		edx <<= 2;
		edx += ebx;
		ebx = D(___19bd60h);
		edx <<= 2;
		if(ebx == 0) goto ___34732h;
		if((int)D(edx+___1de7e0h) >= 3) goto ___34755h;
		ecx = D(___185a14h);
		if(ecx != 1) goto ___34755h;
		D(___196a9ch) = ecx;
		goto ___34755h;
___34732h:
		if(D(___196ae8h) == 4) goto ___34755h;
		if((int)D(edx+___1de7e0h) >= 3) goto ___34755h;
		edi = D(___185a14h);
		if(edi != 1) goto ___34755h;
		D(___196a9ch) = edi;
___34755h:
		edi = D(___196ae8h);
		if(edi != 1) goto ___34768h;
		D(___196a98h) += edi;
		goto ___34770h;
___34768h:
		edx = 0;
		D(___196a98h) = edx;
___34770h:
		if(D(___19bd60h) != 0) goto ___347b9h;
		if((int)D(___196aa4h) <= 0) goto ___347b9h;
		edi = D(___1de81ch);
		if(edi != 1) goto ___347b3h;
		if(edi != D(___196ae8h)) goto ___347b3h;
		ebx = D(___1a103ch);
		edx = ebx*4;
		edx += ebx;
		edx <<= 2;
		edx += ebx;
		if((int)D(edx*4+___1de7e0h) < 0x64) goto ___347b9h;
___347b3h:
		D(___196aa4h) = 0-D(___196aa4h);
___347b9h:
		esi = D(___19bd60h);
		if(esi != 0) goto ___34826h;
		if((int)D(___196aa8h) <= 0) goto ___34826h;
		edx = D(___1a1028h);
		ecx = D(___196aach);
		D(esp+0xd0) = esi;
		edx <<= 2;
___347e2h:
		ebx = 0;
		L(ebx) = B(edx+___1a0ef8h);
		if(ebx != ecx) goto ___347f5h;
		eax = D(esp+0xd0);
___347f5h:
		esi = D(esp+0xd0);
		esi++;
		edx++;
		D(esp+0xd0) = esi;
		if((int)esi < 4) goto ___347e2h;
		edx = eax;
		eax <<= 2;
		eax += edx;
		eax <<= 2;
		eax += edx;
		if(D(eax*4+___1de7e0h) == 0x64) goto ___34826h;
		D(___196aa8h) = 0-D(___196aa8h);
___34826h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if(D(eax+___1a0214h) == 0xffffffff) goto ___3484ch;
		D(eax+___1a0218h)++;
___3484ch:
		edi = 0;
		eax = 0;
		edx = 0;
		D(___243d44h) = edi;
___34858h:
		eax += 0x6c;
		D(eax+___1a01d4h) = edx;
		D(eax+___1a01d8h) = edx;
		D(eax+___1a01dch) = edx;
		D(eax+___1a01d0h) = edx;
		if(eax != 0x870) goto ___34858h;
		eax = 0x14;
		edx = 0;
		D(esp+0xd0) = eax;
		___2ec68h_cdecl();
		D(___196af0h) = edx;
		D(___196aech) = edx;
		D(esp+0xd0) = edx;
___348a0h:
		edx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+edx+0xcc);
		eax = 0x6c*eax;
		edi = edx+1;
		esi = 0;
		D(esp+0xd0) = edi;
		D(eax+___1a0234h) = esi;
		if((int)edi < 4) goto ___348a0h;
		D(esp+0xd0) = esi;
		eax = 0;
		ebx = 0;
		esi = D(___1a1ef8h);
___348dbh:
		ecx = D(eax+___1a0224h);
		if((int)ebx >= (int)ecx) goto ___348f0h;
		if(esi == D(esp+0xd0)) goto ___348f0h;
		ebx = ecx;
___348f0h:
		edi = D(esp+0xd0);
		edi++;
		eax += 0x6c;
		D(esp+0xd0) = edi;
		if((int)edi < 0x14) goto ___348dbh;
		ecx = D(___19bd60h);
		if(ecx != 0) goto ___35101h;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if((int)ebx < (int)D(eax+___1a0224h)) goto ___35101h;
		if(D(___196ab0h) != 0) goto ___35101h;
		D(esp+0xd0) = ecx;
		esi = eax;
		D(esp+0xec) = eax;
		D(esp+0xf0) = eax;
		ecx = eax;
		eax = 0;
___34960h:
		if(D(___196ae8h) == 4) goto ___349a0h;
		if(D(___1a1028h) != 0) goto ___349a0h;
		edx = 0x32*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___349a0h:
		if(D(___196ae8h) == 4) goto ___349d0h;
		if(D(___1a1028h) != 0) goto ___349d0h;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___349d0h;
		edx = D(eax+___1de7dch);
		edx = 0x32*edx;
		D(___196af0h) = edx;
___349d0h:
		edx = D(esp+0xf0);
		edi = D(edx+___1a0228h);
		if((int)edi <= 0) goto ___34adah;
		if((int)edi >= 6) goto ___34adah;
		if(D(___196ae8h) == 4) goto ___34a31h;
		if(D(___1a1028h) != 1) goto ___34a31h;
		edx = 0x104*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___34a31h:
		if(D(___196ae8h) == 4) goto ___34a74h;
		if(D(___1a1028h) != 2) goto ___34a74h;
		edx = 0x1f4*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___34a74h:
		if(D(___196ae8h) == 4) goto ___34aa7h;
		if(D(___1a1028h) != 1) goto ___34aa7h;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34aa7h;
		edx = D(eax+___1de7dch);
		edx = 0x104*edx;
		D(___196af0h) = edx;
___34aa7h:
		if(D(___196ae8h) == 4) goto ___34adah;
		if(D(___1a1028h) != 2) goto ___34adah;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34adah;
		edx = D(eax+___1de7dch);
		edx = 0x1f4*edx;
		D(___196af0h) = edx;
___34adah:
		edx = D(esp+0xec);
		edi = D(edx+___1a0228h);
		if((int)edi <= 5) goto ___34be5h;
		if((int)edi >= 0xb) goto ___34be5h;
		if(D(___196ae8h) == 4) goto ___34b3ch;
		if(D(___1a1028h) != 1) goto ___34b3ch;
		edx = 0xc8*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___34b3ch:
		if(D(___196ae8h) == 4) goto ___34b7fh;
		if(D(___1a1028h) != 2) goto ___34b7fh;
		edx = 0x12c*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___34b7fh:
		if(D(___196ae8h) == 4) goto ___34bb2h;
		if(D(___1a1028h) != 1) goto ___34bb2h;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34bb2h;
		edx = D(eax+___1de7dch);
		edx = 0xc8*edx;
		D(___196af0h) = edx;
___34bb2h:
		if(D(___196ae8h) == 4) goto ___34be5h;
		if(D(___1a1028h) != 2) goto ___34be5h;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34be5h;
		edx = D(eax+___1de7dch);
		edx = 0x12c*edx;
		D(___196af0h) = edx;
___34be5h:
		edx = D(ecx+___1a0228h);
		if((int)edx <= 0xa) goto ___34ce3h;
		if((int)edx >= 0x10) goto ___34ce3h;
		if(D(___196ae8h) == 4) goto ___34c3dh;
		if(D(___1a1028h) != 1) goto ___34c3dh;
		edx = 0x78*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___34c3dh:
		if(D(___196ae8h) == 4) goto ___34c80h;
		if(D(___1a1028h) != 2) goto ___34c80h;
		edx = 0x96*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___34c80h:
		if(D(___196ae8h) == 4) goto ___34cb0h;
		if(D(___1a1028h) != 1) goto ___34cb0h;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34cb0h;
		edx = D(eax+___1de7dch);
		edx = 0x78*edx;
		D(___196af0h) = edx;
___34cb0h:
		if(D(___196ae8h) == 4) goto ___34ce3h;
		if(D(___1a1028h) != 2) goto ___34ce3h;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34ce3h;
		edx = D(eax+___1de7dch);
		edx = 0x96*edx;
		D(___196af0h) = edx;
___34ce3h:
		edx = D(esi+___1a0228h);
		if((int)edx <= 0xf) goto ___34ddbh;
		if((int)edx >= 0x15) goto ___34ddbh;
		if(D(___196ae8h) == 4) goto ___34d3bh;
		if(D(___1a1028h) != 1) goto ___34d3bh;
		edx = 0x3c*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___34d3bh:
		if(D(___196ae8h) == 4) goto ___34d7bh;
		if(D(___1a1028h) != 2) goto ___34d7bh;
		edx = 0x50*D(eax+___1de7dch);
		edi = D(esp+0xd0);
		D(esp+0xd4) = edx;
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(esp+0xd4);
		D(edx+___1a0234h) = edi;
___34d7bh:
		if(D(___196ae8h) == 4) goto ___34dabh;
		if(D(___1a1028h) != 1) goto ___34dabh;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34dabh;
		edx = D(eax+___1de7dch);
		edx = 0x3c*edx;
		D(___196af0h) = edx;
___34dabh:
		if(D(___196ae8h) == 4) goto ___34ddbh;
		if(D(___1a1028h) != 2) goto ___34ddbh;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34ddbh;
		edx = D(eax+___1de7dch);
		edx = 0x50*edx;
		D(___196af0h) = edx;
___34ddbh:
		edx = D(___1a1028h);
		if(edx < 1) goto ___34dfah;
		if(edx <= 1) goto ___34eebh;
		if(edx == 2) goto ___34fd4h;
		goto ___350ach;
___34dfah:
		if(edx != 0) goto ___350ach;
		if(D(eax+___1de810h) != 1) goto ___34e4ah;
		if(D(eax+___1de7e0h) == 0x64) goto ___34e4ah;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0x2ee;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34e4ah;
		D(___196aech) = 0x2ee;
___34e4ah:
		if(D(eax+___1de810h) != 2) goto ___34e92h;
		if(D(eax+___1de7e0h) == 0x64) goto ___34e92h;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0x177;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34e92h;
		D(___196aech) = 0x177;
___34e92h:
		if(D(eax+___1de810h) != 3) goto ___350ach;
		if(D(eax+___1de7e0h) == 0x64) goto ___350ach;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0xbb;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___350ach;
		D(___196aech) = 0xbb;
		goto ___350ach;
___34eebh:
		if(D(eax+___1de810h) != 1) goto ___34f33h;
		if(D(eax+___1de7e0h) == 0x64) goto ___34f33h;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0xbb8;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34f33h;
		D(___196aech) = 0xbb8;
___34f33h:
		if(D(eax+___1de810h) != 2) goto ___34f7bh;
		if(D(eax+___1de7e0h) == 0x64) goto ___34f7bh;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0x5dc;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___34f7bh;
		D(___196aech) = 0x5dc;
___34f7bh:
		if(D(eax+___1de810h) != 3) goto ___350ach;
		if(D(eax+___1de7e0h) == 0x64) goto ___350ach;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0x177;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___350ach;
		D(___196aech) = 0x177;
		goto ___350ach;
___34fd4h:
		if(D(eax+___1de810h) != 1) goto ___3501ch;
		if(D(eax+___1de7e0h) == 0x64) goto ___3501ch;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0x2ee0;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___3501ch;
		D(___196aech) = 0x2ee0;
___3501ch:
		if(D(eax+___1de810h) != 2) goto ___35064h;
		if(D(eax+___1de7e0h) == 0x64) goto ___35064h;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0x1770;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___35064h;
		D(___196aech) = 0x1770;
___35064h:
		if(D(eax+___1de810h) != 3) goto ___350ach;
		if(D(eax+___1de7e0h) == 0x64) goto ___350ach;
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		D(edx+___1a0234h) += 0x5dc;
		edx = D(esp+0xd0);
		if(edx != D(___1a103ch)) goto ___350ach;
		D(___196aech) = 0x5dc;
___350ach:
		edi = D(esp+0xd0);
		edx = 0;
		L(edx) = B(esp+edi+0xcc);
		edx = 0x6c*edx;
		edi = D(edx+___1a0234h);
		D(edx+___1a0210h) += edi;
		edi = D(edx+___1a0234h);
		D(edx+___1a0238h) += edi;
		if(D(eax+___1de810h) != 1) goto ___350e6h;
		D(edx+___1a022ch)++;
___350e6h:
		edx = D(esp+0xd0);
		edx++;
		eax += 0x54;
		D(esp+0xd0) = edx;
		if((int)edx < 4) goto ___34960h;
___35101h:
		if(D(___19bd60h) != 0) goto ___3518fh;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		if((int)ebx >= (int)D(eax*4+___1a0224h)) goto ___3518fh;
		edx = D(___1a103ch);
		eax = 4*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		edx = D(eax*4+___1de7dch);
		eax = 4*edx;
		eax -= edx;
		eax <<= 3;
		eax += edx;
		eax <<= 4;
		edx = D(___1a103ch);
		D(___196af0h) = eax;
		L(edx) = B(esp+edx+0xcc);
		edx &= 0xff;
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = eax*4;
		eax = D(___196af0h);
		D(edx+___1a0234h) = eax;
___3518fh:
		if(D(___19bd60h) == 0) goto ___357bbh;
		ecx = D(___196ad4h);
		ecx++;
		esi = D(___196ab8h);
		D(___196ad4h) = ecx;
		ecx = ___1a116ch;
		eax = D(___196ad4h);
		ecx += 0x96;
		if((int)eax < (int)esi) goto ___3532ch;
		edx = 0;
		eax = 1;
		D(esp+0xd0) = edx;
		D(___196a80h) = eax;
		edx = ___1a116ch;
___351dfh:
		esi = ecx;
		edi = edx;
		ebx = D(esp+0xd0);
		strcpy(edi, esi);
		eax = D(esp+0xd0);
		edx += 0x96;
		ecx += 0x96;
		edi = ebx+1;
		L(eax) = B(eax+___1a1f4fh);
		D(esp+0xd0) = edi;
		B(ebx+___1a1f4eh) = L(eax);
		if((int)edi < 0x15) goto ___351dfh;
		eax = D(___180864h);
		edx = D(___1a1ef8h);
		D(___1a1dbah) = eax;
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		esi = ___1a01e0h;
		eax -= edx;
		edi = ___1a1dbah;
		eax <<= 2;
		H(ebx) = 0;
		esi += eax;
		edx = 0;
		strcat(edi, esi);
		D(esp+0xd0) = edx;
		esi = ___182458h;
		edx = ___1a116ch;
		strcat(edi, esi);
		B(___1a1f63h) = H(ebx);
		ebx = edx+0x96;
___352c4h:
		esi = ebx;
		edi = edx;
		ecx = D(esp+0xd0);
		strcpy(edi, esi);
		eax = D(esp+0xd0);
		edx += 0x96;
		ebx += 0x96;
		ecx++;
		L(eax) = B(eax+___1a1f4fh);
		D(esp+0xd0) = ecx;
		B(ecx+___1a1f4dh) = L(eax);
		if((int)ecx < 0x15) goto ___352c4h;
		L(eax) = B(___180130h);
		L(ecx) = 0;
		B(___1a1dbah) = L(eax);
		B(___1a1f63h) = L(ecx);
		goto ___35500h;
___3532ch:
		edi = 0;
		edx = ___1a116ch;
		D(esp+0xd0) = edi;
___3533ah:
		esi = ecx;
		edi = edx;
		ebx = D(esp+0xd0);
		strcpy(edi, esi);
		eax = D(esp+0xd0);
		edx += 0x96;
		ecx += 0x96;
		ebx++;
		L(eax) = B(eax+___1a1f4fh);
		D(esp+0xd0) = ebx;
		B(ebx+___1a1f4dh) = L(eax);
		if((int)ebx < 0x15) goto ___3533ah;
		if(D(___1de814h) != 0xffffffff) goto ___353aah;
		ecx = 8;
		edi = ___1a1dbah;
		esi = ___182470h;
		while(ecx--||++ecx){

			D(edi) = D(esi);
			edi += 4;
			esi += 4;
		}
		goto ___35481h;
___353aah:
		eax = D(___180864h);
		D(___1a1dbah) = eax;
		eax = D(___196ad4h);
		edx = 0;
		L(edx) = B(eax+___1a2010h);
		eax = edx;
		eax <<= 4;
		esi = ___18d492h;
		eax -= edx;
		edi = ___1a1dbah;
		esi += eax;
		strcat(edi, esi);
		esi = ___182490h;
		strcat(edi, esi);
		eax = D(___196ad4h);
		edx = 0;
		L(edx) = B(eax+___1a2011h);
		eax = edx;
		eax <<= 4;
		esi = ___18d492h;
		eax -= edx;
		esi += eax;
		strcat(edi, esi);
		esi = ___180724h;
		strcat(edi, esi);
___35481h:
		ebx = ___1a116ch;
		H(edx) = 0;
		eax = 0;
		B(___1a1f63h) = H(edx);
		D(esp+0xd0) = eax;
		edx = ebx+0x96;
___3549dh:
		esi = edx;
		edi = ebx;
		ecx = D(esp+0xd0);
		strcpy(edi, esi);
		eax = D(esp+0xd0);
		ebx += 0x96;
		edx += 0x96;
		ecx++;
		L(eax) = B(eax+___1a1f4fh);
		D(esp+0xd0) = ecx;
		B(ecx+___1a1f4dh) = L(eax);
		if((int)ecx < 0x15) goto ___3549dh;
		L(eax) = B(___180130h);
		L(ebx) = 0;
		B(___1a1dbah) = L(eax);
		B(___1a1f63h) = L(ebx);
___35500h:
		edi = 0;
		ebx = D(___196adch);
		D(___196aech) = edi;
		D(esp+0xd0) = edi;
		D(___196af0h) = edi;
		if((int)ebx <= 0) goto ___357bbh;
		edx = 0;
		esi = 1;
		edi = 4;
___3552fh:
		D(esp+0xd8) = D(___185a54h)/0x32;
		eax = D(edx+___1de7dch);
		eax = eax*D(esp+0xd8);
		ecx = D(esp+0xd0);
		ebx = 0;
		L(ebx) = B(esp+ecx+0xcc);
		ebx=  0x6c*ebx;
		D(ebx+___1a0234h) = eax;
		ebx = ecx;
		if(ebx != D(___1a103ch)) goto ___3557dh;
		D(___196af0h) = eax;
___3557dh:
		if(esi != D(edx+___1de810h)) goto ___355fah;
		eax = D(esp+0xd0);
		ebx = 0;
		L(ebx) = B(esp+eax+0xcc);
		ebx=  0x6c*ebx;
		D(esp+0xdc) = 3*D(___185a54h)/10;
		eax = D(esp+0xdc);
		ecx = D(ebx+___1a0234h);
		ecx += eax;
		eax = D(esp+0xd0);
		D(ebx+___1a0234h) = ecx;
		if(eax != D(___1a103ch)) goto ___355e0h;
		eax = D(esp+0xdc);
		D(___196aech) = eax;
___355e0h:
		ebx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+ebx+0xcc);
		eax = 0x6c*eax;
		D(eax+___1a0224h) += 6;
___355fah:
		if(D(edx+___1de810h) != 2) goto ___35677h;
		eax = D(esp+0xd0);
		ebx = 0;
		L(ebx) = B(esp+eax+0xcc);
		ebx=  0x6c*ebx;
		D(esp+0xe0) = D(___185a54h)/4;
		eax = D(esp+0xe0);
		ecx = D(ebx+___1a0234h);
		ecx += eax;
		eax = D(esp+0xd0);
		D(ebx+___1a0234h) = ecx;
		if(eax != D(___1a103ch)) goto ___3565eh;
		eax = D(esp+0xe0);
		D(___196aech) = eax;
___3565eh:
		ebx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+ebx+0xcc);
		eax = 0x6c*eax;
		D(eax+___1a0224h) += edi;
___35677h:
		if(D(edx+___1de810h) != 3) goto ___356f5h;
		eax = D(esp+0xd0);
		ebx = 0;
		L(ebx) = B(esp+eax+0xcc);
		ebx=  0x6c*ebx;
		D(esp+0xe4) = D(___185a54h)/5;
		eax = D(esp+0xe4);
		ecx = D(ebx+___1a0234h);
		ecx += eax;
		eax = D(esp+0xd0);
		D(ebx+___1a0234h) = ecx;
		if(eax != D(___1a103ch)) goto ___356dbh;
		eax = D(esp+0xe4);
		D(___196aech) = eax;
___356dbh:
		ebx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+ebx+0xcc);
		eax = 0x6c*eax;
		D(eax+___1a0224h) += 2;
___356f5h:
		if(edi != D(edx+___1de810h)) goto ___35758h;
		eax = D(esp+0xd0);
		ebx = 0;
		L(ebx) = B(esp+eax+0xcc);
		ebx=  0x6c*ebx;
		D(esp+0xe8) = 3*D(___185a54h)/20;
		eax = D(esp+0xe8);
		ecx = D(ebx+___1a0234h);
		ecx += eax;
		eax = D(esp+0xd0);
		D(ebx+___1a0234h) = ecx;
		if(eax != D(___1a103ch)) goto ___35758h;
		eax = D(esp+0xe8);
		D(___196aech) = eax;
___35758h:
		ebx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+ebx+0xcc);
		eax = 0x6c*eax;
		ebx = D(eax+___1a0234h);
		D(eax+___1a0210h) += ebx;
		ebx = D(eax+___1a0234h);
		ecx = D(eax+___1a0238h);
		ecx += ebx;
		ebx = D(edx+___1de810h);
		D(eax+___1a0238h) = ecx;
		if(esi != ebx) goto ___3579bh;
		D(eax+___1a022ch)++;
___3579bh:
		eax = D(esp+0xd0);
		ebx = D(___196adch);
		eax++;
		edx += 0x54;
		D(esp+0xd0) = eax;
		if((int)eax < (int)ebx) goto ___3552fh;
___357bbh:
		edi = D(___1a1ef8h);
		edx = 0;
		eax = 0;
		D(esp+0xd0) = edx;
___357cch:
		esi = D(eax+___1a0224h);
		if((int)edx >= (int)esi) goto ___357e1h;
		if(edi == D(esp+0xd0)) goto ___357e1h;
		edx = esi;
___357e1h:
		ebx = D(esp+0xd0);
		ebx++;
		eax += 0x6c;
		D(esp+0xd0) = ebx;
		if((int)ebx < 0x14) goto ___357cch;
		if(D(___19bd60h) != 0) goto ___3583bh;
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		eax <<= 2;
		if((int)edx >= (int)D(eax+___1a0224h)) goto ___3583bh;
		ebx = D(eax+___1a0230h);
		edx = D(___1de834h);
		ebx++;
		D(eax+___1a01ech) = edx;
		D(eax+___1a0230h) = ebx;
		goto ___3589ah;
___3583bh:
		eax = 0;
		edx = D(esp+0xc8);
		D(esp+0xd0) = eax;
		if((int)edx <= 0) goto ___3589ah;
		edi = D(esp+0xc8);
		edx = 0;
___35858h:
		ebx = D(esp+0xd0);
		eax = 0;
		L(eax) = B(esp+ebx+0xcc);
		eax = 0x6c*eax;
		esi = D(esp+0xd0);
		edx += 0x54;
		esi++;
		ebx = D(edx+___1de78ch);
		ecx = D(eax+___1a0230h);
		D(eax+___1a01ech) = ebx;
		ecx++;
		D(esp+0xd0) = esi;
		D(eax+___1a0230h) = ecx;
		if((int)esi < (int)edi) goto ___35858h;
___3589ah:
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

			___3deb8h();

#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER

		___117d4h();
		___117f4h();
		esi = D(___1a1ef8h);
		edx = 0;
		eax = 0;
		D(esp+0xd0) = edx;
___358c3h:
		ecx = D(eax+___1a0224h);
		if((int)edx >= (int)ecx) goto ___358d8h;
		if(esi == D(esp+0xd0)) goto ___358d8h;
		edx = ecx;
___358d8h:
		edi = D(esp+0xd0);
		edi++;
		eax += 0x6c;
		D(esp+0xd0) = edi;
		if((int)edi < 0x14) goto ___358c3h;
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		if((int)edx >= (int)D(eax*4+___1a0224h)) goto ___35922h;
		if(D(___196ae8h) != 1) goto ___35922h;
		if(D(___19bd60h) == 0) goto ___359f6h;
___35922h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = D(eax*4+___1a020ch);
		eax = 4*edx;
		eax -= edx;
		edx = D(___1a0fb8h);
		edx += eax;
		___11378h_cdecl(B(edx), B(edx+1), B(edx+2));
		ecx = ___181c9ch;
		ebx = 2;
		edx = ___181ca8h;
		eax = 1;
		dRally_Sound_load(eax, edx, ebx, ecx, 5);
		eax = D(___24cc58h);
		dRally_Sound_setMusicVolume(eax);
		eax = 0x5622;
		dRally_Sound_setSampleRate(eax);
		dRally_Sound_play();
		___606dfh();
		__VESA101_SETMODE();
		eax = 0x46;
		edx = 0;
		___605deh_cdecl(eax, edx);
___359f6h:
		___12940h();
		eax = 0;
		D(esp+0xd0) = eax;
		esi = 0;

		while(1){

			eax = B(esp+0xd0);
			__DISPLAY_SET_PALETTE_COLOR(esi, esi, esi, eax);
			edx = D(esp+0xd0);
			edx++;
			D(esp+0xd0) = edx;
		
			if((int)edx >= 0x100) break;
		}

		ecx = D(___19bd60h);
		if(ecx == 0){
				
			D(esp+0xd0) = ecx;
			eax = 0;
			edx = 0;
			ecx = D(___1a1ef8h);
		
			while(1){

				if(((int)edx < (int)D(eax+___1a0224h))&&(ecx != D(esp+0xd0))) edx = D(eax+___1a0224h);
				esi = D(esp+0xd0);
				esi++;
				eax += 0x6c;
				D(esp+0xd0) = esi;
			
				if((int)esi >= 0x14) break;
			}

			ebx = D(___1a1ef8h);
			eax = 8*ebx;
			eax -= ebx;
			eax <<= 2;
			eax -= ebx;

			if((int)edx < (int)D(eax*4+___1a0224h)){

				___31588h();

				while(1){
					
					___3079ch_cdecl(1);
					
					if((4 <= B(___1a1f67h))&&(4 <= B(___1a1f68h))&&(4 <= B(___1a1f69h))) break;
				}

				memset(esp+0x4c, 0, 4);

				ebx = 0;
				while(1){

					eax = rand_watcom106();
					edx = eax;
					edx = (int)edx>>0x1f;
					edx = eax%4;
					edx++;
					eax = edx;
					D(ebx+___1de810h) = edx;

					if(B(esp+edx+0x4b) == 0){
						
						ebx += 0x54;
						B(esp+eax+0x4b) = 1;

						if(ebx == 0x150){
							
							if(D(___196ae8h) == 1){

								___22808h();
							}
							else {

								___3892ch_cdecl(0);
								D(___185a20h) = 1;
							}

							break;
						}
					}
				}
			}
			else {

				___3892ch_cdecl(0);
			}
		}
		else {

			___3986ch();

			if(D(___196a80h) != 0) ___1e4f8h();
		}
}
