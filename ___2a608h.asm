cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___13248h
	extern	___185ba9h
	extern	___252e0h
	extern	___1a10cch
	extern	___12e78h
	extern	___180848h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___5994ch
	extern	___59b3ch
	extern	___2ab50h
	extern	kmap
	extern	kmap

section .text

__GDECL(___2a608h_cdecl)
	mov 	eax, [esp+4]
	call 	___2a608h
	retn


__GDECL(___2a608h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     esi, eax
		push    byte 1
		mov     ecx, 5ah
		mov     ebx, 1ach
		mov     edx, 0d2h
		mov     eax, 6eh
		call    near ___13248h
		mov     ecx, 24044h
		mov     eax, esi
		mov     edx, ___185ba9h
		call    near ___252e0h
		mov     ebx, esi
		sub     ecx, eax
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ecx, 2a650h
		mov     ebx, ___180848h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		call    near ___59b3ch
___2a67ah:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		jne     short ___2a68ah
		call    near ___2ab50h
		jmp     short ___2a67ah
___2a68ah:
		xor     ah, ah
		mov     [kmap+3ch], ah
		mov     [kmap+3dh], ah

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		call    near ___59b3ch
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
