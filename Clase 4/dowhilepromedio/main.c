/*          ESTRUCTURAS ANIDADAS
Este programa obtiene el promedio de 10 califiaciones*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0;
    int calif;
    int suma=0;
    float promedio;
    int aprobados=0;
    int reprobados=-1;

    printf("\t\tCALIFICACIONES\n");
    printf("Introduce calificacion\n");

    do
    {
        scanf ("%i",&calif);
        suma+=calif; //Operador asignacion: Tiene la funcion de suma=suma+calif;
        cont++;
        if(calif>=6)
            aprobados++;
        else
            reprobados++;
    } while (calif!=-1);
    promedio=(float)(suma+1)/(cont-1);

    printf ("El promedio de calificaciones es: %.2f\n",promedio);
    printf ("El numero de aprobados es: %i\n",aprobados);
    printf ("El numero de reprobados es: %i\n",reprobados);


    getch();
    return 0;
}
