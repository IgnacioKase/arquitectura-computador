#include <stdio.h>
#include <stdlib.h>

int swap(int* a, int* b) {

}

int swap_3(int* a, int* b, int* c) {
    swap(a, b);
    swap(c, a);
}

int main() {
    printbin(-1);
    printbin(0);
    printbin(1);
    printbin(2);
    printbin(10);
    printbin(100);
    printbin(500);
    printbin(350050);
    return 0;
}