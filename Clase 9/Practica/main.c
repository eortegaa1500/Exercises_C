#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int main()
{
    int arreglo [TAM];
    int i;

    for (i=0;i<=TAM-1;i++)
    {
        arreglo [i]=2*i;
    }
    for (i=0;i<=TAM-1;i++)
    {
        printf ("%i\n",arreglo[i]);
    }
    getch ();
}
