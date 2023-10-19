//Ejercicio 1 Funciones
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    double discriminante;
    double potb;
    double res;

    printf ("\t\t\tFunciones: La chicharronera XD\n\n");
    printf ("Este programa permite resolver ecuaciones cuadraticas\n de la forma ax^2+bx+c\n");

    printf("Porfavor introduce el valor del coeficiente a (El termino cuadratico)\n");
    scanf("%f",&a);
    printf("Porfavor introduce el valor del coeficiente b (El termino lineal)\n");
    scanf("%f",&b);
    printf("Porfavor introduce el valor del coeficiente c (El termino independiente)\n");
    scanf("%f",&c);

    potb=pow(b,2);
    discriminante=sqrt(potb-(4*a*c));


    printf("%f",discriminante);




    getch();
    return 0;
}
