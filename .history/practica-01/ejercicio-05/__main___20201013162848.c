#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
    char *buffer;
    size_t bufsize = 50000, length;
    buffer = (char *)malloc(bufsize * sizeof(char));
    length = getline(&buffer,&bufsize,stdin);
    return 0;
}