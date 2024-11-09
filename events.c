#include "drally.h"

extern void_cb ___2432c8h;

void dRally_Keyboard_make(SDL_Scancode);
void dRally_Keyboard_break(SDL_Scancode);

// 80 : Left
// 81 : Down
// 82 : Up
// 79 : Right

#define DEADZONE_STICK 6400
extern int isinmenu;
extern int abort_race;

#define A_BUTTON SDL_CONTROLLER_BUTTON_A
#define B_BUTTON SDL_CONTROLLER_BUTTON_B
#define X_BUTTON SDL_CONTROLLER_BUTTON_X
#define Y_BUTTON SDL_CONTROLLER_BUTTON_Y

void IO_Loop(void) {
    SDL_Event e;

    while (SDL_PollEvent(&e)) {
        switch (e.type) {
            case SDL_KEYDOWN:
				switch(e.key.keysym.scancode)
				{
					case SDL_SCANCODE_HOME:
						___2432c8h();
					break;
#ifdef MIYOO
					case SDL_SCANCODE_LALT:
#else
					case SDL_SCANCODE_LCTRL:
#endif
						if (isinmenu == 1)
						{
							dRally_Keyboard_make(40);
						}
						else if (abort_race)
						{
							dRally_Keyboard_make(SDL_SCANCODE_Y);
						}
						else
						{
							dRally_Keyboard_make(224);
						}
                        break;
#ifdef MIYOO
					case SDL_SCANCODE_LCTRL:
#else
					case SDL_SCANCODE_LALT:
#endif
						if (isinmenu == 1)
						{
							dRally_Keyboard_make(41);
						}
						else if (abort_race)
						{
							dRally_Keyboard_make(SDL_SCANCODE_N);
						}
						else
						{
							 dRally_Keyboard_make(226);
						}
					break;
					default:
						dRally_Keyboard_make(e.key.keysym.scancode);
					break;
				}
                break;
            case SDL_KEYUP:
				switch(e.key.keysym.scancode)
				{
                    case SDL_SCANCODE_LCTRL:
						if (isinmenu == 1)
						{
							dRally_Keyboard_break(40);
						}
						else if (abort_race)
						{
							dRally_Keyboard_break(SDL_SCANCODE_Y);
						}
						else
						{
							dRally_Keyboard_break(224);
						}
                        break;
					case SDL_SCANCODE_LALT:
						if (isinmenu == 1)
						{
							dRally_Keyboard_break(41);
						}
						else if (abort_race)
						{
							dRally_Keyboard_break(SDL_SCANCODE_N);
						}
						else
						{
							 dRally_Keyboard_break(226);
						}
					break;
					default:
					dRally_Keyboard_break(e.key.keysym.scancode);
					break;
				}
               
                break;
            case SDL_QUIT:
                printf("[dRally] TODO: exit not handled properly\n");
                ___2432c8h();
                break;

            case SDL_CONTROLLERBUTTONDOWN:
                switch (e.cbutton.button) {
                    case A_BUTTON:
                    
						if (isinmenu == 1)
						{
							dRally_Keyboard_make(40);
						}
						else if (abort_race)
						{
							dRally_Keyboard_make(SDL_SCANCODE_Y);
						}
						else
						{
							dRally_Keyboard_make(224);
						}
                        break;
                    case B_BUTTON:
						if (isinmenu == 1)
						{
							dRally_Keyboard_make(41);
						}
						else if (abort_race)
						{
							dRally_Keyboard_make(SDL_SCANCODE_N);
						}
						else
						{
							 dRally_Keyboard_make(226);
						}
                        break;
                    case X_BUTTON:
						dRally_Keyboard_make(SDL_SCANCODE_LSHIFT);
                        break;
                    case Y_BUTTON:
						dRally_Keyboard_make(SDL_SCANCODE_SPACE);
                        break;
                    case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
						dRally_Keyboard_make(SDL_SCANCODE_BACKSPACE);
                        break;
                    case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
						dRally_Keyboard_make(SDL_SCANCODE_TAB);
                        break;
                    case SDL_CONTROLLER_BUTTON_BACK:
						dRally_Keyboard_make(SDL_SCANCODE_ESCAPE);
                        break;
                    case SDL_CONTROLLER_BUTTON_DPAD_UP:
						dRally_Keyboard_make(82);
                    break;
                    case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
						dRally_Keyboard_make(81);
                    break;
                    case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
						dRally_Keyboard_make(80);
                    break;
                    case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
						dRally_Keyboard_make(79);
                    break;
                }
                break;
                
            case SDL_CONTROLLERBUTTONUP:
                switch (e.cbutton.button) {
                    case A_BUTTON:
						if (isinmenu == 1)
						{
							dRally_Keyboard_break(40);
						}
						else if (abort_race)
						{
							dRally_Keyboard_break(SDL_SCANCODE_Y);
						}
						else
						{
							dRally_Keyboard_break(224);
						}
                        break;
                    case B_BUTTON:
						if (isinmenu == 1)
						{
							dRally_Keyboard_break(41);
						}
						else if (abort_race)
						{
							dRally_Keyboard_break(SDL_SCANCODE_N);
						}
						else
						{
							 dRally_Keyboard_break(226);
						}
                        break;
                    case X_BUTTON:
						dRally_Keyboard_break(SDL_SCANCODE_LSHIFT);
                        break;
                    case Y_BUTTON:
						dRally_Keyboard_break(SDL_SCANCODE_SPACE);
                        break;
                    case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
						dRally_Keyboard_break(SDL_SCANCODE_BACKSPACE);
                        break;
                    case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
						dRally_Keyboard_break(SDL_SCANCODE_TAB);
                        break;
                    case SDL_CONTROLLER_BUTTON_BACK:
						dRally_Keyboard_break(SDL_SCANCODE_ESCAPE);
                        break;
                        
                    case SDL_CONTROLLER_BUTTON_DPAD_UP:
						dRally_Keyboard_break(82);
                    break;
                    case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
						dRally_Keyboard_break(81);
                    break;
                    case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
						dRally_Keyboard_break(80);
                    break;
                    case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
						dRally_Keyboard_break(79);
                    break;
                }
                break;
                
            case SDL_CONTROLLERAXISMOTION:
                switch (e.caxis.axis) {
                    case SDL_CONTROLLER_AXIS_LEFTX:
                        if (e.caxis.value < -DEADZONE_STICK) {
                            dRally_Keyboard_make(80); // Left
                        } else if (e.caxis.value > DEADZONE_STICK) {
                            dRally_Keyboard_make(79); // Right
                        } else {
                            dRally_Keyboard_break(80); // Left release
                            dRally_Keyboard_break(79); // Right release
                        }
                        break;
                    case SDL_CONTROLLER_AXIS_LEFTY:
                        if (e.caxis.value < -DEADZONE_STICK) {
                            dRally_Keyboard_make(82); // Up
                        } else if (e.caxis.value > DEADZONE_STICK) {
                            dRally_Keyboard_make(81); // Down
                        } else {
                            dRally_Keyboard_break(82); // Up release
                            dRally_Keyboard_break(81); // Down release
                        }
                        break;
                }
                break;
            case SDL_JOYHATMOTION:
                switch (e.caxis.axis) {
                    case SDL_HAT_LEFTUP:
                        if (e.caxis.value & SDL_HAT_LEFT) {
                            dRally_Keyboard_make(80); // Left
                            dRally_Keyboard_make(82); // Up
                        } else {
                            dRally_Keyboard_break(80); // Left release
                            dRally_Keyboard_break(82); // Up release
                        }
                        break;
                    case SDL_HAT_UP:
                        if (e.caxis.value & SDL_HAT_UP) {
                            dRally_Keyboard_make(82); // Up
                        } else {
                            dRally_Keyboard_break(82); // Up release
                        }
                        break;
                    // Similar cases for SDL_HAT_RIGHTUP, SDL_HAT_RIGHT, SDL_HAT_RIGHTDOWN, SDL_HAT_DOWN, SDL_HAT_LEFTDOWN
                }
                break;
        }
    }
}
