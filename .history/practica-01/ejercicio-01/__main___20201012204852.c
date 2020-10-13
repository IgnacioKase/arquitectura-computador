#include <stdio.h>
#include <stdlib.h>

int main() {
    long a_comp = 0b10000000000000000000000000000000;
    long a = 1 << 32;
    if( a == a_comp )
        printf("a) correcto");
    else
        printf("a) incorrecto");
    return 0;
}