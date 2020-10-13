#include <stdio.h>
#include <stdlib.h>

int check_result(int calculo, int enunciado, char exercise) {
    if( calculo == enunciado )
        printf("%c)\n\tcorrecto: %x == %x\n", exercise, calculo, enunciado);
    else
        printf("%c)\n\tincorrecto: %x != %x\n", exercise, calculo, enunciado);
    return calculo == enunciado;
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
    calculo = -1 & 0xFFF0;
    check_result(calculo, enunciado, 'c');

    /* d) */
    enunciado =  0b10101010000000000000000010101010;
    calculo = 0xAA | (0xAA << 24); // 0xAAA = 1010 1010
    check_result(calculo, enunciado, 'd');

    /* e) */
    enunciado =  0b00000000000000000000010100000000;
    calculo = 5 << 8;
    check_result(calculo, enunciado, 'e');

    /* f) */
    enunciado =  0b11111111111111111111111011111111;
    calculo =  -1 & (~ (1 << 8));
    check_result(calculo, enunciado, 'f');

    /* g) */
    enunciado =  0b11111111111111111111111111111111;
    calculo =   0 - 1;
    check_result(calculo, enunciado, 'g');

    /* h) */
    enunciado =  0b00000000000000000000000000000000;
    calculo = 0x80000000 - 0x80000000;
    check_result(calculo, enunciado, 'h');
    
    return 0;
}