#include <stdio.h>
#include <stdlib.h>

int main() {
    int a_comp = 0b10000000000000000000000000000000;
    int a = 1 << 31;
    if( a == a_comp )
        printf("a) correcto, a: %d, a_comp:%d", a, a_comp);
    else
        printf("a) incorrecto, a: %d, a_comp:%d", a, a_comp);
    return 0;
}