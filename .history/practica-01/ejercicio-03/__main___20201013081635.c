#include <stdio.h>
#include <stdlib.h>

int is_one(long n, int b) {
    return (n >> b) & 1; 
}

void printbin(unsigned n){
    printf("0b");
    for (size_t i = 0; i < sizeof(n) * 8; i++)
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