#include <stdio.h>
#include <stdlib.h>

int main() {
    long a_comp = 0b10000000000000000000000000000000;
    long a = 0b1 >> 32;
    if( a == a_comp )
        printf("a) correcto, a: %d, a_comp:%d", a, a_comp);
    else
        printf("a) incorrecto, a: %d, a_comp:%d", a, a_comp);
    return 0;
}