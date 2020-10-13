#include <stdio.h>
#include <stdlib.h>

int check_result(int a, int b, char exercise) {
    if( a == b )
        printf("%c)\n\tcorrecto: %x == %x\n", exercise, a, b);
    else
        printf("%c)\n\tincorrecto: %x != %x\n", exercise, a, b);
    return a == b;
}

int main() {

    int enunciado, calculo;

    /* a) */
    enunciado = 0b10000000000000000000000000000000;
    calculo = 1 << 31;
    check_result(calculo, enunciado, 'a');

    /* b) */
    enunciado = 0b10000000000000001000000000000000;
    calculo = (1 << 31) | (1 << 15);
    check_result(calculo, enunciado, 'b');

    /* c) */
    enunciado =  0b11111111111111111111111100000000;
    calculo = -1 & 0b11111111111111111111111100000000;
    check_result(calculo, enunciado, 'c');

    /* d) */
    enunciado =  0b10101010000000000000000010101010;
    calculo = 0xAA | (0xAA << 24); // 0xAAA = 1010 1010
    check_result(calculo, enunciado, 'd');

    /* d) */
    enunciado =  0b10101010000000000000000010101010;
    calculo = 0xAA | (0xAA << 24); // 0xAAA = 1010 1010
    check_result(calculo, enunciado, 'd');
    
    return 0;
}