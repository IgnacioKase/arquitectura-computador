    .data
format: .asciz "%ld\n"
format_hexa: .asciz "0x%x\n"
i:      .quad 0xDEADBEEF
    .text
    .global main
main:
    movq $format, %rdi # El primer argumento es el formato.
    movq $1234, %rsi # El valor a imprimir.
    xorq %rax, %rax # Cantidad de valores de punto flotante.
    call printf

    # a
    movq $format, %rdi
    movq %rsp, %rsi
    xorq %rax, %rax
    call printf

    # b
    movq $format, %rdi
    leaq format, %rsi
    xorq %rax, %rax
    call printf

    # c
    movq $format_hexa, %rdi
    movq $format, %rsi
    xorq %rax, %rax
    call printf

    # d
    movq $format_hexa, %rdi
    movq %rsp, %rsi
    xorq %rax, %rax
    call printf
    
    # e
    movq %rsp, %rbx
    addq $8, %rbx
    movq $format_hexa, %rdi
    movq %rbx, %rsi
    xorq %rax, %rax
    call printf

    # f
    movq $format, %rdi
    movq i, %rsi
    xorq %rax, %rax
    call printf
    
    # g
    movq $format, %rdi
    leaq i, %rsi
    xorq %rax, %rax
    call printf

    ret
