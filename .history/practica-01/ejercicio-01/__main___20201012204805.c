#include <stdio.h>
#include <stdlib.h>

int main() {
    int  a_comp = 0b10000000000000000000000000000000;
    int a = 1 << 32;
    if( a == a_comp )
        printf("a correcto");
    return 0;
}