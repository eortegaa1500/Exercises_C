//Este programa recibe un peso y altura y calcula IMC

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,altura;
    float imc;
    float radio,volumen,PI;
    float r1,r2,re;

    PI=3.1416;


    printf("Hola, Este programa calcula tu IMC\n");
    printf("Introduce tu peso en kilogramos porfavor\n");
    scanf("%f",&peso);

    printf("Ahora introduce tu altura en metros\n");
    scanf ("%f",&altura);

    imc=peso/(altura*altura);

    printf("Tu IMC es de: %.2f \n\n\n",imc);

    system("pause");
    system ("cls");


    printf("Hola, en este programa se calcula el volumen de una esfera a partir de un radio\n");

    printf("Introduce un radio porfavor\n");
    scanf("%f",&radio);

    volumen=1.33*PI*radio*radio*radio;

    printf("El volumen de la esfera es %.2f u^2\n\n\n",volumen);

    system("pause");
    system ("cls");

    printf("Hola, en este programa se calcula el valor equivalente en paralelo de dos resistencias\n");
    printf("Porfavor, introduce el valor de la primer resitencia en ohms\n");
    scanf("%f",&r1);

    printf("Introduce el valor de la segunda resistencia en ohms\n");
    scanf("%f",&r2);

    re= (r1*r2)/(r1+r2);

    printf("El valor de la resistencia equivalente a las resistencias de\n %f OHMS y %f OHMS en paralelo es de %f OMHS\n",r1,r2,re);

    system("pause");
    system ("cls");
    return 0;
}//fin de main
