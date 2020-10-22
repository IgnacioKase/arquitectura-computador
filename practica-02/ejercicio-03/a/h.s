    .global main
main: 
    movl $(0x80000000 - 0x80000000), %eax
    ret
