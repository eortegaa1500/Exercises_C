/***********************************************************************

GENERACION DE NUMEROS ALEATORIOS Y PSEUDOALEATORIOS
FUNCIONES DEFINIDAS POR EL USUARIO

PROGRAMA QUE SIMULA UN JUEGO DE DADOS
TOMADO DE "COMO PROGRAMAR EN C/C++"
DEITEL Y DEITEL
2a EDICION
PRETINCE HALL 1995

15 de marzo de 2010

************************************************************************/


/************************************************************************
   REGLAS DEL JUEGO DE CRAPS:

> Un jugador lanza dos dados de seis caras
> Se calcula la suma de los puntos en cada tirada
> Si en la primera tirada la suma es 7 u 11, el jugador gana

> Si en la primera tirada la suma es 2,3 ó 12, el jugador pierde

> Si en la primera tirada la suma es 4,5,6,8,9 ó 10, Dicha suma se convierte en   el “Punto” o “Tirada” del jugador.
Para ganar deberá seguir jugando hasta que  “haga su Punto”, es decir, hasta que vuelva a salir el número de la primera tirada.

> Si antes de “hacer su Punto” la suma es 7, el jugador pierde.
************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int lanzarDados(void); //Prototipo de la función lanzarDados()

int main()
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

/************************************************************************

Modifique el juego de craps para permitir apuestas.
Convierta en una función el segmento del programa que ejecuta un juego de craps que devuelva el resultado del juego.

Inicialice la variable saldo en 10,000.

Indique al usuario que introduzca una apuesta.

Utilice un ciclo while para verificar si apuesta es menor o igual que saldo.
Si no es así indique al usuario que introduzca una apuesta válida.

Una vez introducida una apuesta valida ejecute un juego de craps.

Si el jugador pierde, disminuya saldo con el valor de apuesta.

Imprima el nuevo saldo, verifique si saldo es mayor que cero, si no lo es
imprima el mensaje "Lo siento su saldo está agotado".

Durante el transcurso del juego ejecute una función que imprima mensajes
para hacer algo de conversación, por ejemplo: "¿Mala noche?, parece que va a la quiebra", "Creo que es hora de cambiar sus fichas por efectivo",
"¿Se va a conformar con eso?, arriésguese un poco más!"

************************************************************************/






