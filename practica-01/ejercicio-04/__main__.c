#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void rotate(int* a, int* b, int* c) {
    swap(a, b);
    swap(c, a);
}

int main() {
    int a = 1, b = 2, c = 3;

    rotate(&a, &b, &c);

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    printf("\n***********\n\n");

    a = 150;
    b = 350;
    c = -1;

    rotate(&a, &b, &c);

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    return 0;
}