#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {

}

void swap_3(int* a, int* b, int* c) {
    swap(a, b);
    swap(c, a);
}

int main() {
    int a = 1, b = 2, c = 3;
    swap_3(&a, &b, &c);
    return 0;
}