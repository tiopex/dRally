#ifndef __DRALLY_DISPLAY_H
#define __DRALLY_DISPLAY_H

#ifdef MIYOO
#define W_WIDTH 	320//800//640
#define W_HEIGHT 	240//600//480
#else
#define W_WIDTH 	640//800//640
#define W_HEIGHT 	480//600//480
#endif


enum { VGA3, VGA13, VESA101 };
enum { W_SHRINK, W_LETTERBOX};


void dRally_Display_init(int mode);
void dRally_Display_clean(void);

#endif // __DRALLY_DISPLAY
