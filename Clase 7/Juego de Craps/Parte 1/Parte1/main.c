
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void CRAPS(void);
int lanzarDados(void);
void valorescase(void);

int juego;
int caso;
int saldo=10000;

int main()
{
    int apuesta;
    int salir;

    printf("\t\t\t\tJUEGO DE CRAPS\n");
    printf("Hola, aqui vamos a jugar CRAPS, pero antes tienes que realizar una apuesta\n Tu saldo es de 10000\n Ingresa tu apuesta.\n");

    scanf ("%i",&apuesta);

    while (apuesta<=0||apuesta>10000) //Mientras el usuario no ingrese una cantidad entre 0 y 10000, no podra avanzar
    {
        printf ("Introduce una apuesta valida\n");
        scanf("%i",&apuesta);
    }
    //En esta linea puede ir un system("cls")

    printf ("MUY BIEN, JUGUEMOS!!!!\n\n"); //Mensaje que indica al usuario que ingreso una apuesta valida
    printf("\nTu saldo es de: %i\n",saldo);
    printf("Tu apuesta es de: %i\n", apuesta);

    CRAPS(); //Se ejecuta un juego de craps

    printf("\n\nValor de juego = %i",juego);

    if (juego==1) //Si el juego toma valor 1, la variable apuesta ingresada se sumara a saldo
        saldo+=apuesta;
    else //Si el juego toma valor 0, la variable apuesta se restara a saldo
        saldo=saldo-apuesta;

    printf("\nTu nuevo saldo es de: %i\n",saldo);

    if (saldo<10000)
        caso=1;
    else if (saldo>=10000&&saldo<200000)
        caso=2;
    else if (saldo>=10000&&saldo<200000)
        caso=2;
    else if (saldo>=10000&&saldo<200000)
        caso=2;
    else if (saldo>=10000&&saldo<200000)
        caso=2;
    else if (saldo>=10000&&saldo<200000)
        caso=2;

    switch (caso)
        {
        case 1:
            printf ("");
            break;
        case 2:
            printf("Caso 2 ejecutado");
            break;
        }

    if (saldo>0)
        {
            printf("\n\nQuieres salir del juego\nSi\) 1\nNo\) 0\n\n");
            scanf("%i",&salir);
            if (salir==1)
            {
                printf ("Gracias por jugar. Vuelve pronto!!!!\n\n\n");
                system ("pause");
                return 0;
            }
        }
    while (saldo>0)//Mientras la variable saldo sea mayor a 0 el jugador podra seguir jugando

    if (saldo<10000)
        caso=1;
    else if (saldo>=10000&&saldo<200000)
        caso=2;

    switch (caso)
        {
        case 1:
            printf ("Caso 1 Ejecutado");
            break;
        case 2:
            printf("Caso 2 ejecutado");
            break;
        }
        printf("\n\nTu nuevo saldo es de: %i\n",saldo);
        printf("Valor de la apuesta anterior %i\n\n", apuesta);
        printf ("Introduce tu nueva apuesta:\n");

        scanf("%i",&apuesta);

        while (apuesta<=0||apuesta>saldo)
        {
            printf ("Introduce una apuesta valida\n");
            scanf("%i",&apuesta);
        }

        //En esta linea puede ir un system("cls")

        printf("MUY BIEN, JUGUEMOS!!!\n\n");
        printf("Valor nuevo de apuesta %i\n\n", apuesta);
        printf("Valor de saldo: %i\n",saldo);

        CRAPS();

        if (juego==1) //Si el juego toma valor 1, la variable apuesta ingresada se sumara a saldo
        {
            saldo+=apuesta;
        }
        else //Si el juego toma valor 0, la variable apuesta se restara a saldo
        {
            saldo=saldo-apuesta;
        }
        printf("\nTu saldo es de: %i\n",saldo);
        if (saldo>0)
        {
            printf("\n\nQuieres salir del juego\nSi\) 1\nNo\) 0\n\n");
            scanf("%i",&salir);
            if (salir==1)
            {
                printf ("Gracias por jugar. Vuelve pronto!!!!\n\n\n");
                system ("pause");
                return 0;
            }
        }

    printf("\nQue mala suerte!!! Perdiste todo tu dinero");

    getch ();
    return 0;
}

void CRAPS (void)
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
    {
        printf("\nGanaste!");
        juego=1;
    }
    else
    {
        printf("\nPerdiste");
        juego=0;
    }
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




