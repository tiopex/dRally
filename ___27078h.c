#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e6ch[];
	extern byte ___1a1ee4h[];
	extern byte ___1a1ea8h[];
	extern byte ___185cbch[];
	extern byte ___1a1ed0h[];
	extern byte ___1a01b8h[];
	extern byte ___18e2a4h[];
	extern byte ___180728h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01fch[];
	extern byte ___18e298h[];
	extern byte ___1a1e78h[];

void ___13094h_cdecl(const char *, dword);
dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___259e0h_cdecl(dword, dword, dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);

// SHOP NEXT CAR AFTER BUY UPDATE
void ___27078h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5;
	byte 	esp[0x28];


		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e6ch);
		ebx += 0x13890;
		edx = ecx;
		L(edx) >>= 0x2;
___270a6h:
		H(ecx) = L(edx);
___270a8h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___270a8h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___270a6h;
		ecx = 0x10;
		edx = D(___1a1ee4h);
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax = 4*edx;
		esi = D(___1a1ea8h);
		eax -= edx;
		ebx += 0x13890;
		eax <<= 0x9;
		edx = 0x60;
		esi += eax;
		L(edx) >>= 0x2;
___270fbh:
		H(ecx) = L(edx);
___270fdh:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___270fdh;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___270fbh;
		eax = D(___1a1ee4h);
		edx = 0x8d;
		eax <<= 0x8;
		ecx = D(___1a1ee4h);
		eax = ___185cbch+eax;
		ebx = D(___1a1ed0h);
		p5 = eax;
		ecx = D(ecx*4+___1a01b8h);
		eax = 0x10;
		___259e0h_cdecl(eax, edx, ebx, ecx, p5);
		edx = D(___1a1ee4h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		ebx = 0xa;
		eax <<= 0x5;
		edx = esp;
		eax = D(eax+___18e2a4h);
		edi = esp+0x14;
		eax = itoa_watcom106(eax, edx, ebx);
		X(eax) = W(___180728h);
		esi = esp;
		W(esp+0x14) = X(eax);
		strcat(edi, esi);
		eax = esp+0x14;
		eax = ___25180h_cdecl(eax);
		edx = eax+0x20590;
		ebx = 0x180;
		eax = esp+0x14;
		ecx = 0x77;
		___12f60h_cdecl(eax, edx);
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(4*eax+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		eax <<= 0x5;
		eax = ___18e298h+eax;
		edx = 0x136aa;
		eax += 0x1f0;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(4*eax+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		eax <<= 0x5;
		eax = ___18e298h+eax;
		edx = 0x15eaa;
		eax += 0x218;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(4*eax+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		eax <<= 0x5;
		eax = ___18e298h+eax;
		edx = 0x186aa;
		eax += 0x240;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(4*eax+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		eax <<= 0x5;
		eax = ___18e298h+eax;
		edx = 0x1aeaa;
		eax += 0x268;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(4*eax+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		eax <<= 0x5;
		eax = ___18e298h+eax;
		edx = 0x1d6aa;
		eax += 0x290;
		___13094h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(4*eax+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		eax <<= 0x5;
		eax = ___18e298h+eax;
		edx = 0x1feaa;
		eax += 0x2b8;
		ecx = 0x40;
		___13094h_cdecl(eax, edx);
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e78h);
		ebx += 0x16080;
___27378h:
		edi = edx;
___2737ah:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___27382h;
		B(ebx) = L(eax);
___27382h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___2737ah;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___27378h;
		ecx = 0x40;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e78h);
		ebx += 0x160f0;
		esi += 0x400;
___273b4h:
		edi = edx;
___273b6h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___273beh;
		B(ebx) = L(eax);
___273beh:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___273b6h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___273b4h;
		return;
}