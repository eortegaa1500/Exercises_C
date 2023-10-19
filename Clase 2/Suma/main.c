//Operacion Aritmetico
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1;
    float valor2;
    float resultado;

    printf("Hola, Introduce un valor\n");
    scanf("%f",&valor1);

    printf("Introduce otro valor\n");
    scanf("%f",&valor2);

    resultado=valor1+valor2;

    printf("El resultado de %f y %f es %.2f XD",valor1,valor2,resultado);

    getch();
    return 0;
}//Fin de main
