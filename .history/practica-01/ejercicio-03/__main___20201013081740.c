#include <stdio.h>
#include <stdlib.h>

int is_one(long n, int b) {
    return (n >> b) & 1; 
}

void printbin(unsigned n){
    printf("0b");
    size_t size = sizeof(n) * 8;
    for (size_t i = size - 1; i >= 0; i--)
    {
        if ( i % 8 == 0)
            printf(" ");
        printf("%d", is_one(n, i));
    }
    printf("\n");
};


int main() {
    printbin(10);
    return 0;
}