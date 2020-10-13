#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    *a = *a ^ *b; // x now becomes 15 (1111)
    *b = *a ^ *b; // y becomes 10 (1010)
    *a = *a ^ *b; // x becomes 5 (0101)
}

void swap_3(int* a, int* b, int* c) {
    swap(a, b);
    swap(c, a);
}

int main() {
    int a = 1, b = 2, c = 3;
    swap_3(&a, &b, &c);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    return 0;
}