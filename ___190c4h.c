#include "drally.h"

    extern byte ___19eb50h[];
    extern byte ___19eb54h[];
    extern byte ___19eb58h[];
    extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
    extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
    extern byte ___19bd60h[];
    extern byte ___1807cch[];
    extern byte ___185c0bh[];
    extern byte ___1a10fch[];
    extern byte ___1807e8h[];
    extern byte ___1a1108h[];

void ___2b318h(void);
void ___58c60h(void);
void ___13a98h_cdecl(dword);
void ___23230h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13710h(dword, dword);
void ___135fch(dword, dword, dword, dword);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___3892ch_cdecl(dword);

void ___190c4h(void){

	long long 	ll_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[0xc];


		___2b318h();
		edx = 0x640000;
		ebp = 0x32;
		D(esp+0x8) = edx;
___190eah:
		___58c60h();
		esi = 0x2;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)esi;
		if(edx == 0) goto ___1910bh;
		eax = 0x1;
		___13a98h_cdecl(eax);
___1910bh:
		edi = 0;
		esi = D(esp+0x8);
		D(esp+0x4) = edi;
___19115h:
		eax = 0;
		L(eax) = B(esp+4);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb54h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb58h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		eax = D(esp+0x4);
		eax++;
		edi += 0xc;
		D(esp+0x4) = eax;
		if((int)eax < 0x60) goto ___19115h;
		ebx = 0x80;
		esi = D(esp+0x8);
		edi = 0x600;
		D(esp+0x4) = ebx;
___191b4h:
		eax = 0;
		L(eax) = B(esp+4);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb54h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb58h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ecx = D(esp+0x4);
		ecx++;
		edi += 0xc;
		D(esp+0x4) = ecx;
		if((int)ecx < 0x100) goto ___191b4h;
		ebx = D(esp+0x8);
		ebx -= 0x20000;
		ebp--;
		D(esp+0x8) = ebx;
		if((int)ebp >= 0) goto ___190eah;
		L(eax) = ___59b3ch();
		L(eax) = ___5994ch();
		eax = 0x2;
		ecx = 0x4b000;
		___3892ch_cdecl(eax);
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0;
		memcpy(edi, esi, ecx);
		eax = 0;
		___13710h(eax, edx);
		edx = 0x1;
		ebx = 0x27f;
		eax = edx;
		ecx = 0x6d;
		___13710h(eax, edx);
		edx = 0x173;
		eax = 0;
		___135fch(eax, edx, ebx, ecx);
		if(D(___19bd60h) == 0) goto ___192f6h;
		ecx = 0x390a3;
		ebx = ___1807cch;
		edx = ___185c0bh;
		eax = D(___1a10fch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x390d9;
		ebx = ___1807e8h;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
___192f6h:
		___23230h();
		___12cb8h__VESA101_PRESENTSCREEN();
		ebp = 0;
		___2b318h();
		D(esp) = ebp;
___1930ah:
		___58c60h();
		esi = 0x2;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)esi;
		if(edx == 0) goto ___1932bh;
		eax = 0x1;
		___13a98h_cdecl(eax);
___1932bh:
		esi = D(esp);
		edx = 0;
		edi = 0;
		D(esp+0x4) = edx;
___19336h:
		eax = 0;
		L(eax) = B(esp+4);
		nn =  eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb54h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb58h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ebx = D(esp+0x4);
		ebx++;
		edi += 0xc;
		D(esp+0x4) = ebx;
		if((int)ebx < 0x60) goto ___19336h;
		esi = 0x80;
		edi = 0x600;
		D(esp+0x4) = esi;
		esi = D(esp);
___193d4h:
		eax = 0;
		L(eax) = B(esp+4);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb54h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb58h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		eax = D(esp+0x4);
		eax++;
		edi += 0xc;
		D(esp+0x4) = eax;
		if((int)eax < 0x100) goto ___193d4h;
		edx = D(esp+0x2);
		edx += 2;
		ebp++;
		W(esp+2) = X(edx);
		if((int)ebp < 0x32) goto ___1930ah;
		L(eax) = ___59b3ch();
		L(eax) = ___5994ch();

		return;
}