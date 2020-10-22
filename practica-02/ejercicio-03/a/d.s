    .global main
main: 
    movl $(0xAA | (0xAA << 24)), %eax
    ret
