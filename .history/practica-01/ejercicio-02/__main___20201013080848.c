#include <stdio.h>
#include <stdlib.h>

int is_one(long n, int b) {
    return (n >> b) & 1; 
}

int main() {
    printf("es uno: %d", is_one(0b0100, 2));
    return 0;
}