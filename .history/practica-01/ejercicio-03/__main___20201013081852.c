#include <stdio.h>
#include <stdlib.h>

int is_one(long n, int b) {
    return (n >> b) & 1; 
}

void printbin(unsigned n){
    printf("0b");
    size_t size = sizeof(n) * 8;
    for (size_t i = 0; i < size; i++)
    {
        if ( i % 8 == 0 && i != 0)
            printf(" ");
        printf("%d", is_one(n, size - i));
    }
    printf("\n");
};


int main() {
    printbin(10);
    return 0;
}