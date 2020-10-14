#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
    char *buffer, temp;
    size_t buffer_size = 500000, length;
    buffer = (char *)malloc(buffer_size * sizeof(char));
    length = getline(&buffer,&buffer_size, stdin);

    if(argc != 3)
        return;

    int code = argv[3];

    printf("%d\n", code);

    for (size_t i = 0; i < length; i++)
    {   
        temp =  buffer[i] ^ code;
        printf("%c", temp);
    }
    
    return 0;
}