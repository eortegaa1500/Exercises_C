/***************************************
                                    CALIFICACIONES
Ortega Alvarez Eduardo
Zarate Hernandez Oscar Odin
5IM4

El usuario ingresa calificaciones al programa
Las calificaciones son guardadas por un arreglo "calificaciones"
Se cuentan el numero de veces que se repite una calificacion mediante el arreglo "frecuencias"
Se debe calcular la media y la moda
****************************************/
#include <stdio.h>
#include <stdlib.h>
#define TAC 10 //TAC es una constante simbolica que nos dira el maximo de calificaciones que se pueden ingresar

int main()
{
    int calificaciones [TAC]; //En este arreglo se guardaran las calificaciones ingresadas por el usuario
    int frecuencias [11]; //En este arreglo se cuenta el numero de veces que se repite una calificacion, es 11 porque va de 0 a 10
    int i; //Esta variable es el subindice de el arreglo calificaiones
    int z; //Esta variable es el subindice del arreglo frecuencias
    int max; //Esta variable se utilzara para saber cual numero se repite mas

    printf("\t\tCALIFICACIONES\n");
    printf("Hola, en este programa debes ingresar calificaciones\n\n");
    printf ("\nINGRESA LAS CALIFICACIONES\n");

    for (z=0;z<=10;z++) //Inicializar los datos del arreglo frecuaciencias a 0
        frecuencias[z]=0;

    for (i=0;i<=TAC-1;i++) //Aqui se guardan las calificaxiones en el arreglo calificaciones
    {
        scanf ("%i",&calificaciones[i]);
        switch (calificaciones[i])
        {
        case 0:
            frecuencias[0]++;
            break;
        case 1:
            frecuencias[1]++;
            break;
        case 2:
            frecuencias[2]++;
            break;
        case 3:
            frecuencias[3]++;
            break;
        case 4:
            frecuencias[4]++;
            break;
        case 5:
            frecuencias[5]++;
            break;
        case 6:
            frecuencias[6]++;
            break;
        case 7:
            frecuencias[7]++;
            break;
        case 8:
            frecuencias[8]++;
            break;
        case 9:
            frecuencias[9]++;
            break;
        case 10:
            frecuencias[10]++;
            break;
        }
    }

    for (i=0;i<=TAC-1;i++) //Este for sirve para imprimir las calificaciones ingresadas
        printf("%i\n",calificaciones[i]);

    printf ("\n");

    for (z=0;z<=10;z++) //Impprimir el numero de veces que se repite cada numero
        printf("El numero de veces que se repite %i es: %i\n",z,frecuencias[z]);

    max=frecuencias[0];
    if (frecuencias[1]>max)
        max = frecuencias [1];
    if (frecuencias[2]>max)
        max = frecuencias [2];
    if (frecuencias[3]>max)
        max = frecuencias [3];
    if (frecuencias[4]>max)
        max = frecuencias [4];
    if (frecuencias[5]>max)
        max = frecuencias [5];
    if (frecuencias[6]>max)
        max = frecuencias [6];
    if (frecuencias[7]>max)
        max = frecuencias [7];
    if (frecuencias[8]>max)
        max = frecuencias [8];
    if (frecuencias[9]>max)
        max = frecuencias [9];
    if (frecuencias[10]>max)
        max = frecuencias [10];


    getch();
}
