#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int lanzarDados(void);

int main()
{
    int apuesta;
    int saldo=10000;
    int resultado;

    printf("/t/APUESTA EN JUEGO DE CRAPS\n\n");
    printf("Tu saldo es %i, introduce la apuesta\n",saldo);
    scanf("%i",&apuesta);
    if (apuesta<=saldo)
        printf ("Apuesta valida");
        resultado = CRAPS ();
    else
        printf ("Apuesta invalida");
    return 0;
}

void CRAPS(int lanzarDados())
{
    int estatusJuego, suma, miPunto;
         /*  Para la variable estatusJuego, los valores posibles son:
             1 Ganar, 2 Perder, 0 Continuar */

    srand(time(NULL));     //Tomar la hora como semilla

    suma=lanzarDados();    //ejecutar un lanzamiento de dados

    switch(suma)
           {
             case 7: case 11:
                            estatusJuego=1;    //Gana en el primer tiro
                            break;
             case 2: case 3: case 12:
                                   estatusJuego=2;
                                             //Pierde en el primer tiro
                                   break;
             default:
                     estatusJuego=0;    //Guardar punto y seguir jugando
                     miPunto=suma;
                     printf("\nTu punto es: %d\n", miPunto);
                     break;
             }

     while(estatusJuego== 0)     //Seguir jugando
          {
           suma=lanzarDados();

           if (suma == miPunto)
               estatusJuego=1;         //El jugador Gana
           else
               if(suma == 7)
                  estatusJuego=2;     //El jugador pierde

          }

    if (estatusJuego == 1)
        printf("\nGanaste!");
    else
        printf("\nPerdiste");

    getch();
    return 0;
}



int lanzarDados(void)       //Cuerpo de la función lanzarDados()
{
  int dado1,dado2, sumaTemp;

  dado1=1 + (rand()%6); /*Asignar a dado1 y dado2 un valor aleatorio
                         entre 1 y 6   */
  dado2=1 + (rand()%6);

  sumaTemp= dado1 + dado2;    //calcular la suma de dado1 y dado2

  //imprimir valores obtenidos
  printf("\nEl jugador tira: %d + %d = %d\n", dado1,dado2,sumaTemp);
  getch();

  return sumaTemp;   //Regresar el valor sumado
}

