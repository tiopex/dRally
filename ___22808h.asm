cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___180130h
	extern	___1a0d60h
	extern	___181c74h
	extern	GET_FILE_SIZE
	extern	___181c90h
	extern	___181c80h
	extern	___10b80h_cdecl
	extern	___606dfh
	extern	___605deh_cdecl
	extern	___3d890h
	extern	___1240ch
	extern	___24548h
	extern	___2faf0h
	extern	___3d2bch
	extern	___12940h
	extern	___1a1ef8h
	extern	___1a020ch
	extern	___1a0fb8h
	extern	___11564h
	extern	___223c4h
	extern	___2b318h
	extern	___58c60h
	extern	dRally_Sound_setMasterVolume
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	dRally_Sound____649a8h
	extern	dRally_Sound____64a28h
	extern	___181c9ch
	extern	___181ca8h
	extern	dRally_Sound_load
	extern	___24cc58h
	extern	dRally_Sound_setMusicVolume
	extern	dRally_Sound_setSampleRate
	extern	dRally_Sound_play
	extern 	VESA101_SETMODE

section .text

__GDECL(___22808h)
		push    9ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 70h
		mov     al, [___180130h]
		mov     [esp], al
		mov     esi, ___1a0d60h
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___181c74h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    near GET_FILE_SIZE
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		test    eax, eax
		jle     short ___228abh
		push    byte 78h
		push    byte 1
		mov     ecx, 2
		mov     ebx, ___181c90h
		push    ___181c80h
		mov     edx, 1
		mov     eax, ___181c74h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___10b80h_cdecl
	add 	esp, 1ch

___228abh:
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___606dfh
	pop 	eax
	pop 	ecx
	pop 	edx

		call 	VESA101_SETMODE
		mov     eax, 46h
		;xor     ebx, ebx
		xor 	edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    ___605deh_cdecl
	add 	esp, 8
	pop 	ecx

		call    near ___3d890h

	push 	eax
	push 	ecx
	push 	edx
		call    near ___1240ch
	pop 	edx
	pop 	ecx
	pop 	eax
	

	push 	eax
	push 	ecx
	push 	edx
		call    ___24548h
	pop 	edx
	pop 	ecx
	pop 	eax


	push 	eax
	push 	ecx
	push 	edx
		call    near ___2faf0h
	pop 	edx
	pop 	ecx
	pop 	eax


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
		call    ___12940h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, [___1a1ef8h]
		lea     eax, [esi*8+0]
		sub     eax, esi
		shl     eax, 2
		sub     eax, esi
		mov     esi, [eax*4+___1a020ch]
		lea     eax, [esi*4+0]
		sub     eax, esi
		mov     esi, [___1a0fb8h]
		add     esi, eax
		xor     eax, eax
		mov     al, [esi+2]
		mov     [esp+6ch], eax
		fild    word [esp+6ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [esi+1]
		mov     [esp+70h], eax
		fild    word [esp+70h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [esi]
		mov     [esp+74h], eax
		fild    word [esp+74h]
		sub     esp, byte 4
		mov     ebp, 640000h
		fstp    dword [esp]
		mov     edx, 0ffdch
		call    near ___11564h
		call    near ___223c4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [esp+68h], edx
___22965h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     eax, [esp+68h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     esi, ebp
		xor     ecx, ecx
		xor     edi, edi
		mov     [esp+64h], ecx
___2297dh:
		xor     eax, eax
		mov     al, [esp+64h]
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
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     eax, [esp+64h]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+64h], eax
		cmp     eax, dword 100h
		jl      near ___2297dh
		mov     ebx, [esp+68h]
		sub     ebx, 51eh
		sub     ebp, 20000h
		mov     [esp+68h], ebx
		cmp     ebp, 0fffe0000h
		jne     near ___22965h
	push 	eax
	push 	ecx
	push 	edx
		call    near dRally_Sound____649a8h
	pop 	edx
	pop 	ecx
	pop 	eax
	push 	eax
	push 	ecx
	push 	edx
		call    near dRally_Sound____64a28h
	pop 	edx
	pop 	ecx
	pop 	eax
		push    byte 5
		mov     ecx, ___181c9ch
		mov     ebx, 2
		mov     edx, ___181ca8h
		mov     eax, 1

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_load
	add 	esp, 14h
	
		mov     eax, [___24cc58h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMusicVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, 5622h		;; 22050 Hz
		;mov     eax, 0ac44h		;; 44100 Hz
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_setSampleRate
	add 	esp, 4
	pop 	ecx
	pop 	edx
		call    near dRally_Sound_play
		;mov     eax, 1
		;call    near ___659b8h
		add     esp, byte 70h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
