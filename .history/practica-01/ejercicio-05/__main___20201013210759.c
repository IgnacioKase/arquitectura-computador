#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
    char temp;

    if(argc != 2)
        return;

    int code = atoi(argv[1]);
    
    while ( (temp = getchar()) != NULL) {
        printf("%c", temp ^ code);
    }

    printf("\0");
    
    return 0;
}