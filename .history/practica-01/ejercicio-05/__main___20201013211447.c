#include <stdio.h>
#include <stdlib.h>


/*

    Para que el programa decodifique no hace falta
    hacer ninguna modificación. Simplemente tenemos que utilizar
    el mismo código y volveremos a obtener la string original.

    Si volvemos a codificar la string resultado 
    (con un código distinto al original claro esta)
    podremos lograr más niveles de "encriptación". Ya que
    tendremos que decodificar en orden inverso la string final
    con los códigos utilizados.

*/

int main(int argc, char const *argv[]) {
    char temp;

    if(argc != 2)
        return;

    int code = atoi(argv[1]);
    
    while ( (temp = getchar()) != NULL) {
        printf("%c", (temp ^ code) ^ code);
    }

    printf("\0");
    
    return 0;
}