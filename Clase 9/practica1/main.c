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
    int suma=0;//Esta variable se usara para calcular el promedio
    float media;

    printf("\t\tCALIFICACIONES\n");
    printf("Hola, en este programa debes ingresar calificaciones\n\n");
    printf ("\nINGRESA LAS CALIFICACIONES\n");

    for (z=0;z<=10;z++) //Inicializar los datos del arreglo frecuaciencias a 0
        frecuencias[z]=0;

    for (i=0;i<=TAC-1;i++) //Aqui se guardan las calificaxiones en el arreglo calificaciones
    {
        scanf ("%i",&calificaciones[i]);

        while (calificaciones[i]<0||calificaciones[i]>10) //Si el usuario introduce una calificacion no valida se repetira el sacanf
        {
            printf ("Introduce una calificacion valida\n");
            scanf ("%i",&calificaciones[i]);
        }
        suma+=calificaciones[i];
        frecuencias[calificaciones[i]]++;
    }
    /*printf ("\n");
    for (i=0;i<=TAC-1;i++) //Este for sirve para imprimir las calificaciones ingresadas
        printf("%i\n",calificaciones[i]);*/
    /*printf ("\n");
    for (z=0;z<=10;z++) //Impprimir el numero de veces que se repite cada numero
        printf("El numero de veces que se repite %i es: %i\n",z,frecuencias[z]);*/

    media=suma/TAC;

    //printf("%i \n",suma);//Solo para imprimir la suma de las calificaciones

    printf("\n\nLa media de las calficaciones es: %.2f\n\n\n",media);

    printf("Presiona una tecla para salir\n\n");
    getch();
}
