    .global main
main: 
    movl $((1 << 31) | (1 << 15)), %eax
    ret
