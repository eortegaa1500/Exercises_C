#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int valores();// PROTOTIPO DE LA FUNCION VARIABLE
int lanzarDados(void); // PROTOTIPO DE LA FUNCION LANZADARDOS
int GameCraps();// PROTOTIPO DE LA FUNCION DEL JUEGO EN SI
int rangos(void); // PROTOTIPO DE LA FUNCION RANGOS
void frases (int); // PROTOTIPO

int caso, saldo=10000;//Saldo inicial del jugador

int main ()
{
	printf("\n\t\tBIENVENIDO AL JUEGO DE CRAPS");
    printf("\n\n COMENZAMOS...");

	GameCraps();// FUNCION DEL JUEGO EN SI
	printf("\nGRACIAS POR JUGAR... NOS VEMOS PRONTO");//Mensaje de despedida al usuario

	return 0;
}

int GameCraps(void)//Cuerpo de laa función GameCraps()
{

    int apuesta,rep;//Variables para la apuesta del jugador
    int estatusJuego, suma, miPunto;
         /*  Para la variable estatusJuego, los valores posibles son:
             1 Ganar, 2 Perder, 0 Continuar */

	while(saldo > 0)//while para la repetición del juego
	{
    	printf("\n MUY BIEN, TE QUEDAN EN ESTE MOMENTO %i FICHAS VAS A APOSTAR O QUE\n CUANTO VAS A APOSTAR??? \n",saldo); // AQUI ACABA EL JEUGO

		scanf("%i",&apuesta);
    	while (apuesta > saldo||apuesta <= 0)// AQUI SE VALIDA QUE EL SALDO SEA EL CORRECTO
		{
			printf("\nEH! NO ME QUIERAS CHAMAQUEAR... INTRODUCE UNA APUESTA VALIDA: ");
			scanf ("%i", &apuesta);
		}

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
        	printf("\nFELICIDADES... SUERTUDO!");
        	saldo=saldo+apuesta;//Aumento de la apuesta al ganar
    	}
            else
            {
        	printf("\n\nJAJAJA SE VEIA VEIR\n");
        	saldo=saldo-apuesta;//Reducción de la apuesta al perder
            }

		if(saldo>0)//Condición para seguir jugando
		{
			printf("\n AHORA TE QUEDAN  %i FICHAS",saldo);//Pregunta al usuario si  quiere seguir jugando
            printf("\n\nVAS A VOLVER A JUGAR O QUE :v?");
			printf("\n1)Si");
			printf("\n2)No\n");

			scanf("%i",&rep);
		}
			if(rep==2)//Frase final si el usuario quiere parar el juego
                printf("MUY BIEN... ES DE SABIOS RETIRARSE, TUS FICHAS FINALES FUERON: %i ",saldo); // AQUI TAMBIEN ACABA EL JUEGO

     		else if (rep == 1)
                printf("\n BIEN, JAJAJA CONTINUEMOS\n");

            if(saldo<=0)
                printf("\nJAJAJA TE QUEDASTE SIN FICHAS,  NO ERAS NADA Y ASI TE QUEDASTE");

	}

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

int valores(int x)   //Cuerpo de la función valores()
{
	int y;
	switch(x)
	{
		case 1:	srand(time(NULL));
				y=1 + (rand()%6);
				break;
		case 2:	srand(time(NULL));
				y=7 + (rand()%6);
				break;
		case 3:	srand(time(NULL));
				y=13 + (rand()%6);
				break;
		case 4:	srand(time(NULL));
				y=19 + (rand()%6);
				break;
		case 5:	srand(time(NULL));
				y=25 + (rand()%6);
				break;
		case 6:	srand(time(NULL));
				y=31 + (rand()%6);
				break;
		/*36 distintos valores aleatorios que puede tomar la variable y*/
	}
		return 0;
}















