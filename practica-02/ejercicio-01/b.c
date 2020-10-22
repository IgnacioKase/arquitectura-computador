#include <stdio.h>
#include <stdlib.h>

/*
    EXIT CODE: (0375)_8 = (253)_10
*/

int main() {
    char al = 0xFE;
    char bl = -1;
    bl = al + bl;
    return bl++;
}