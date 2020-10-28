.data
    cadena: .asciz "123456"

.text
.global main

main:
    movq $cadena, %rdi
    movb $'3',%sil # Probar luego con diferentes valores (1,a,5....)
.global busca

busca:
    movq $6, %rcx
    xorq %rax, %rax
    movb %sil, %al
    cld
cuerpo:
    scasb
    jz encontrado
    loop cuerpo
    movq $-1, %rax
    jmp fin
encontrado:
    movq %rdi, %rax
fin:
    ret
