/*          REPETICION POR CENTINELA
Este programa obtiene el promedio de 10 califiaciones*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0;
    int calif;
    int suma=0;
    float promedio;

    printf("\t\tCALIFICACIONES\n");
    printf("Introduce calificacion\n");

    while (calif!=-1)
    {
        scanf ("%i",&calif);
        suma+=calif+1; //Operador asignacion: Tiene la funcion de suma=suma+calif;
        cont++;
    }
    promedio=(float)suma/cont;

    printf ("El promedio de calificaciones es: %f",promedio);

    getch();
    return 0;
}
