#include <stdio.h>
#include <stdlib.h>

void printbin(unsigned n){
    for (size_t i = 0; i < sizeof(n) / 8; i++)
    {
        /* code */
    }
    
};


int main() {
    printf("es uno: %d\n", is_one(0b011000, 4));
    printf("es uno: %d\n", is_one(0b011000, 128));
    printf("es uno: %d\n", is_one(0b011000, 500));
    printf("es uno: %d\n", is_one(0b011000, 0));
    return 0;
}