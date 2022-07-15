; is so fanny to write in assembly in c
; writting a language whhich only a few pple left in in this
; mastered it 
; done by andrew mwase 

	extern printf
	section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	section .text
	global main

main:
	push rbp
	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp
	mov rax,0
	ret

