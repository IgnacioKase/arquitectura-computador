.data
    cadenalarga: .asciz "123456"
    cadenacorta: .asciz "122" #=>1 , 124=>0, 456=>0

.text
.global main

main:
    movq $cadenalarga, %rdi
    movq $cadenacorta, %rsi
    movl $3, %edx # debe ser la longitud de cadenacorta

.global compara

compara:
    xorq %rcx, %rcx
    movl %edx, %ecx
loop_compara:
    cmpsb
    jne distintas
    loop loop_compara
    movq $1, %rax
    jmp fin
distintas:
    xorq %rax, %rax
fin:
    ret
    # retorna 1 si las cadenas son iguales en los primeros %edx caracteres
    # retorna 0 si son distintas
