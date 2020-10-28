    .global main
main:
    movq $0x0123456789abcedf, %rax
    rol $32, %rax
    ret
