#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Introduce un caracter \n");
    letra=getch();

    printf("\nEl caracter introducido es:\n%c", letra);

    getch();
    return 0;
}
