cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___2b318h
	extern	___58c60h
	extern	___13a98h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	__DISPLAY_SET_PALETTE_COLOR
	extern	___182860h
	extern	___18286ch
	extern	___1a54d0h
	extern	___3d154h
	extern	___180144h
	extern	bpa_read
	extern	bpk_decode2
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___3d1f0h
	extern	___5994ch
	extern	___3d2bch
	extern	___182878h
	extern	___182884h

section .text

__GDECL(___3d4f0h)
		push    38h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ecx, 4b000h
		mov     ebp, 32h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edx, 640000h
		call 	__MOVS

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [esp], edx
___3d536h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		je      short ___3d554h
		xor     eax, eax
		call    near ___13a98h
___3d554h:
		xor     esi, esi
		xor     edi, edi
		mov     [esp+8], esi
		mov     esi, [esp]
___3d55fh:
		xor     eax, eax
		mov     al, [esp+8]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     edx, [esp+8]
		inc     edx
		add     edi, byte 0ch
		mov     [esp+8], edx
		cmp     edx, 100h
		jl      near ___3d55fh
		mov     ebx, [esp]
		sub     ebx, 20000h
		dec     ebp
		mov     [esp], ebx
		test    ebp, ebp
		jge     near ___3d536h
		mov     eax, ___182860h
		mov     ebx, ___18286ch
		mov     edx, ___1a54d0h

	push 	edx
	push 	ecx
	push 	eax
		call    ___3d154h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ecx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		push    ecx
		call 	bpk_decode2
		add 	esp, 8

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___3d1f0h
___3d63dh:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___3d63dh

	push 	edx
	push 	ecx
	push 	eax
		call    ___3d2bch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     eax, ___182878h
		mov     ebx, ___182884h
		mov     edx, ___1a54d0h

	push 	edx
	push 	ecx
	push 	eax
		call    ___3d154h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		push    edi
		call 	bpk_decode2
		add 	esp, 8

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___3d1f0h
___3d684h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___3d684h

	push 	edx
	push 	ecx
	push 	eax
		call    ___3d2bch
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS
		xor     ebp, ebp

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     [esp+4], ebp
___3d6c3h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		je      short ___3d6e1h
		xor     eax, eax
		call    near ___13a98h
___3d6e1h:
		mov     esi, [esp+4]
		xor     ecx, ecx
		xor     edi, edi
		mov     [esp+8], ecx
___3d6edh:
		xor     eax, eax
		mov     al, [esp+8]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     eax, [esp+8]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+8], eax
		cmp     eax, dword 100h
		jl      near ___3d6edh
		mov     edx, [esp+6]
		add     edx, byte 2
		inc     ebp
		mov     [esp+6], dx
		cmp     ebp, byte 32h
		jl      near ___3d6c3h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
