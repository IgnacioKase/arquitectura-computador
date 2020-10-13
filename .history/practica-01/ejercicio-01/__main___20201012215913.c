#include <stdio.h>
#include <stdlib.h>

int check_result(int a, int b, char exercise) {
    if( a == b )
        printf("%c) correcto: %d == %d", exercise, a, b);
    else
        printf("%c) incorrecto: %d != %d", exercise, a, b);
    return a == b;
}

int main() {
    /* a) */
    int a_enun = 0b10000000000000000000000000000000;
    int a = 1 << 31;
    check_result(a, a_enun, 'a');

    /* b) */
    int b_enun = 0b10000000000000001000000000000000;
    int b = (1 << 31) | (1 << 15);
    check_result(b, b_enun, 'b');

    return 0;
}