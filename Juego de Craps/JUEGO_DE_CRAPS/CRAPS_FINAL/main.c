/*
BLANQUEL GUTIERREZ DANIEL / ORTEGA ALVAREZ EDUARDO / ZARATE HERNANDEZ OSCAR ODIN
5IM4 / JUEGO DE CRAPS / PROGRAMACION EN LEGUAJE C
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void frasesseguir(void);
void frasesganar(void);
void frasesp(void);
int valores();//PROTOTIPO DE LA FUNCIÓN VALORES
int lanzarDados(void); //PROTOTIPO DE LA FUNCIÓN LANZADARDOS
int GameCraps();//PROTOTIPO DE LA FUNCIÓN GAMECRAPS
int saldo=10000;//SALDO INICIAL DEL JUGADOR

int main ()
{
    system("color F4");//COLOR DE FONDO
    printf("\                       __       ________________________________________      \n");
    printf("\                     _ `.`'.   |                                        |\\\n");
    printf("\        ,.---._      \\`\\|   \\  |                                        | |\n");
    printf("\       ,'       `-.__.'     ;  |                                        | |\n");
    printf("\       |                   .'  |                                        | |\n");
    printf("\     ,.-\\.__________,,.--'`    |                                        | |\n");
    printf("\    /    `.             \\      |        EL JUEGO DE CRAPS               | |\n");
    printf("\    |     |,.----. _ ,---.     |                                        | |\n");
    printf("\    ,-..__'.'""\\\\\\\\\"'.\=|.'\"'\\    |                                        | |\n");
    printf("\   | ._\\._||      |=||    ||   |                                        | |\n");
    printf("\   \\  -'; ||     // .-.   ||   |________________________________________| |\n");
    printf("\ .' '._.| |\\\\__.'/     \\_//     \\________________________________________\\|\n");
    printf("\/_      | '\\`'-'` (    |-''.\\\n");
    printf("\'-.`-.  |   `> _/  `'-',    |'\n");
    printf("\   `'.`.\\   /   `-.___.-'  /\n");
    printf("\      `.\\`-'.           _.'\n");
    printf("\    ,-'' `.  `'-.__,__)' \n");

   	printf("\n\t\tBIENVENIDO AL JUEGO DE CRAPS");
   	printf("   REGLAS DEL JUEGO DE CRAPS:\n");
    printf("\> Un jugador lanza dos dados de seis caras\n");
    printf("\> Se calcula la suma de los puntos en cada tirada\n");
    printf("\> Si en la primera tirada la suma es 7 u 11, el jugador gana\n");
    printf("\> Si en la primera tirada la suma es 2,3 o 12, el jugador pierde\n");
    printf("\> Si en la primera tirada la suma es 4,5,6,8,9 o 10, Dicha suma se convierte en   el Punto o Tirada del jugador.\n");
    printf("  Para ganar debera seguir jugando hasta que  haga su Punto, es decir, hasta que  vuelva a salir el numero de la primera tirada.\n");
    printf("\> Si antes de hacer su Punto la suma es 7, el jugador pierde.\n");

    printf("\n\n COMENZAMOS...");
    getch();
    //system("C:\\Windows\\Media\\tada.wav");
	GameCraps();// FUNCION DEL JUEGO EN SI

	printf("\n GRACIAS POR JUGAR... NOS VEMOS PRONTO");//MENSAJE DE DESPEDIDA PARA EL USUARIO
    getch();
	return 0;
}
int GameCraps(void)//CUERPO DE LA FUNCIÓN DEL JUEGO
{

    int apuesta, rep, crap,inicio=1;//VARIABLES PARA EL JUEGO
    int estatusJuego, suma, miPunto;
         /*  Para la variable estatusJuego, los valores posibles son:
             1 Ganar, 2 Perder, 0 Continuar */


	while (crap==1 || inicio ==1)//MODULO DE REPETICION PARA EL JUEGO
	{
    	printf("\n MUY BIEN, TE QUEDAN EN ESTE MOMENTO %i FICHAS VAS A APOSTAR O QUE\n CUANTO VAS A APOSTAR??? \n",saldo);
		scanf(" %i",&apuesta);

    	while (apuesta > saldo||apuesta <= 0)//AQUI SE VALIDA EL SALDO DE LA APUESTA QUE ENTRA
		{
			printf("\n EH! NO ME QUIERAS CHAMAQUEAR... INTRODUCE UNA APUESTA VALIDA: ");
			scanf (" %i ", &apuesta);
		}

    srand(time(NULL));     //Tomar la hora como semilla

    	suma=lanzarDados();    //ejecutar un lanzamiento de dados

    	switch(suma)
           {
             case 7: case 11:
                            estatusJuego=1;
                            system("G:\\CODE_BLOCKS\\PRACTICAS\\JUEGO_DE_CRAPS\\WIN.wav");                 //Gana en el primer tiro
                            break;
             case 2: case 3: case 12:
                                   estatusJuego=2;
                                   system("G:\\CODE_BLOCKS\\PRACTICAS\\JUEGO_DE_CRAPS\\BURLA.wav");          //Pierde en el primer tiroE
                                   break;
             default:
                     estatusJuego=0;    //Guardar punto y seguir jugando
                     miPunto=suma;
                     printf("\n TU PUNTO ES: %d\n", miPunto);
                     break;
             }

     	while(estatusJuego== 0)     //Seguir jugando
          {
           suma=lanzarDados();

           if (suma == miPunto)
           {
               estatusJuego=1;
               system("G:\\CODE_BLOCKS\\PRACTICAS\\JUEGO_DE_CRAPS\\WIN.wav");       //El jugador Gana
           }
           else
               if(suma == 7)
               {
                   estatusJuego=2;
                   system("G:\\CODE_BLOCKS\\PRACTICAS\\JUEGO_DE_CRAPS\\BURLA.wav");     //El jugador pierdeE
               }
          }

    	if (estatusJuego == 1)
    	{
        	printf("\n FELICIDADES... SUERTUDO!\n");
        	frasesganar();
            saldo=saldo+apuesta;//AUMENTO DEL SALDO AL GANAR
    	}

    	else
    	{
        	printf("\n\n JAJAJA SE VEIA VEIR\n");
        	frasesp();
        	saldo=saldo-apuesta;//REDUCCION DEL SALDO AL PERDER
            //printf("\nQUIERES VOLVER A JUGAR, VE A CAJA Y COMPRA 10000 FICHAS NUEVAS... A VECES LA SEGUNDAS OPORTUNIDADES SON LAS MEJORES");
        }

		if(saldo > 0)//CONDICION PARA SEGUIR JUGANDO
		{
			printf("\n AHORA TE QUEDAN  %i FICHAS\t",saldo);//AQUI EL USUARIO DECIDE SI SIGUE O NO JUGANDO
            frasesseguir();
			printf("\n\n VAS A VOLVER A JUGAR O QUE :v?");
			printf("\n1) CLARO");
			printf("\n2) NO, YA ME QUIERO IR");
			printf("\n ");
			rep=getch();
            switch (rep)
                {
                    case '1':
                        crap==1;

                        break;
                    case '2':
                        crap==2;
                        printf("\n MUY BIEN... ES DE SABIOS RETIRARSE, TUS FICHAS FINALES FUERON: %i FICHAS \n PASA A CAJA A COBRARLAS\n",saldo);
                        getch();
                        return 0;
                        break;
                }
		}

		else //SE AVISA QUE YA NO PUEDE SEGUIR JUGANDO
			if(saldo<=0)
		{
			printf("\n LO SIENTO... YA NO HAY NADA QUE HACER TE QUEDASTE SIN FICHAS\n");
			return 0;
		}
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
  printf("\n EL JUGADOR TIRA: %d + %d = %d\n", dado1,dado2,sumaTemp);

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
void frasesganar (void)
{
    int n;
    srand (time(NULL));
    n=(rand()%6)+1;
    switch(n)
    {
    case 1:
        printf ("\n\''Frase 1G\''");
        break;
    case 2:
        printf ("\n\''Frase 2G\''");
        break;
    case 3:
        printf ("\n\''Frase 3G\''");
        break;
    case 4:
        printf ("\n\''Frase 4G\''");
        break;
    case 5:
        printf ("\n\''Frase 5G\''");
        break;
    case 6:
        printf ("\n\''Frase 6G\''");
        break;
    }
}
void frasesp(void)
{
    int n;
    srand (time(NULL));
    n=(rand()%6)+1;
    switch(n)
    {
    case 1:
        printf ("\n\''Frase 1P\''");
        break;
    case 2:
        printf ("\n\''Frase 2P\''");
        break;
    case 3:
        printf ("\n\''Frase 3P\''");
        break;
    case 4:
        printf ("\n\''Frase 4P\''");
        break;
    case 5:
        printf ("\n\''Frase 5P\''");
        break;
    case 6:
        printf ("\n\''Frase 6P\''");
        break;
    }
}

void frasesseguir(void)
{
    int n;
    srand (time(NULL));
    n=(rand()%6)+1;
    switch(n)
    {
    case 1:
        printf ("\n\''Frase 1S\''");
        break;
    case 2:
        printf ("\n\''Frase 2S\''");
        break;
    case 3:
        printf ("\n\''Frase 3S\''");
        break;
    case 4:
        printf ("\n\''Frase 4S\''");
        break;
    case 5:
        printf ("\n\''Frase 5S\''");
        break;
    case 6:
        printf ("\n\''Frase 6S\''");
        break;
    }
}



