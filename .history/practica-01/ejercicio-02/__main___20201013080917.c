#include <stdio.h>
#include <stdlib.h>

int is_one(long n, int b) {
    return (n >> b) & 1; 
}

int main() {
    printf("es uno: %d", is_one(0b011000, 4));
    return 0;
}