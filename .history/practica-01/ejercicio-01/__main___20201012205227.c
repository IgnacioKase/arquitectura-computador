#include <stdio.h>
#include <stdlib.h>

int main() {
    long a_comp = 0b10000000000000000000000000000000;
    long a = 1 << 32;
    if( a == a_comp )
        printf("a) correcto, a: %d, a_comp:%d", 1 << 32, a_comp);
    else
        printf("a) incorrecto, a: %d, a_comp:%d", 1 << 32, a_comp);
    return 0;
}