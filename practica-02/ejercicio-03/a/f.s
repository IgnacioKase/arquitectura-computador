    .global main
main: 
    movl $(-1 & (~ (1 << 8))), %eax
    ret
