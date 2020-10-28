    .global main
main:
    movq $0xF0F0F0F0F0F0F0F0, %rax
    # movq $0, %rax
    # movq $1, %rax
    movq $64, %rcx
    xorq %rbx, %rbx
cuerpo:
    rol $1, %rax
    adc $0, %rbx
    loop cuerpo
fin:
    ret
    