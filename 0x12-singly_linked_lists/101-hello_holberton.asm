section .data
    msg db 'Hello, Holberton', 0
    fmt db "%s", 10, 0

section .text
    extern printf
    global main

main:
    push rbp

    mov rdi, fmt
    mov rsi, msg
    xor rax, rax
    call printf

    pop rbp

    xor rax, rax
    ret

