extern printf

section .text
	global main

main:
	push rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call prinf


	pop rbq

	mov rax,0

	ret

section .data
	msg: dp "Hello, Hoberton", 0
	fmt: dp "%s", 10, 0

