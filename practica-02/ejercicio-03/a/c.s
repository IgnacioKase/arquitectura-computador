    .global main
main: 
    movl $(-1 & 0xffffff00), %eax
    ret
