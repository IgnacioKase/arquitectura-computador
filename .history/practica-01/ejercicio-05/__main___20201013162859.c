#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
    char *buffer;
    size_t buffer_size = 50000, length;
    buffer = (char *)malloc(buffer_size * sizeof(char));
    length = getline(&buffer,&buffer_size, stdin);
    return 0;
}