    .global main
main:
    movl $-1,%eax # Solo para este tamaño el mov pone en 0
    # la parte alta del registro.
    movl $2, %ecx
    imull %ecx
    # completar para que el resultado correcto como signed quede en rax
    
    movl %eax, %ebx
    xorq %rax, %rax
    movl %ebx, %eax
    # esto seria mas sencillo si pudiera hacer
    # andq $0x00000000ffffffff, %rax
    
    shlq $32, %rdx
    orq %rdx, %rax

    xorq %rax,%rax
    movw $-1,%ax
    movw $2, %cx
    mulw %cx
    # completar para que el resultado correcto como unsigned int
    # quede en eax

    movw %ax, %bx
    xorl %eax, %eax
    movw %bx, %ax
    
    shll $16, %edx
    orl %edx, %eax

    ret
