/***************************************
                                    CALIFICACIONES
Ortega Alvarez Eduardo
Zarate Hernandez Oscar Odin
5IM4

El usuario ingresa calificaciones al programa
Las calificaciones son guardadas por un arreglo "calificaciones"
Se cuentan el numero de veces que se repite una calificacion mediante el arreglo "frecuencias"
Se debe calcular la media, la mediana y la moda
****************************************/
#include <stdio.h>
#include <stdlib.h>
/***                                MODIFICAR CALIFICACIONES A INGRESAR
Para cambiar el numero de calificaciones a ingresar, modificar el numero despues de la palabra TAC***/
#define TAC 10//TAC es una constante simbolica que nos dira el maximo de calificaciones que se pueden ingresar

int main()
{
    int calificaciones [TAC]; //En este arreglo se guardaran las calificaciones ingresadas por el usuario
    int frecuencias [11]; //En este arreglo se cuenta el numero de veces que se repite una calificacion, es 11 porque va de 0 a 10
    int maxcalif; //Variable de nos dice el numero de calificaciones que se pueden ingresar en el programa
    /**VARIABLES PARA LA MEDIA*/
    int i; //Esta variable es el subindice de el arreglo calificaiones
    int suma=0;//Esta variable se usara para calcular el promedio
    float media; //Variable que nos dira la media de las calificaciones
    /**VARIABLES PARA MODA*/
    int sub_max,j; //Variables para la MODA
    /**VARIABLES PARA LA MEDIANA*/
    int y;
    int vtemp;
    int ne=TAC;
    int pos1,pos2,posm;
    float mediana;
    /**VARIABLES PARA EL HISTOGRAMA*/
    int z; //Esta variable es el subindice del arreglo frecuencias
    int x;
    /**FUNCIONES*/
    void firmalalo(void); //Prototipo de la funcion firmalalo
    void firmaodin(void); //Prototipo de la funcion firmaodin


    printf ("*******************************************************************\n\n");
    printf("\t\t\tCALIFICACIONES\n\n");
    printf ("*******************************************************************\n\n");
    printf("--> Hola :D, en este programa debes ingresar calificaciones y este te proporcionara la media, la mediana y la moda\n");
    maxcalif = TAC;
    printf ("--> En este momento se pueden ingresar %i calificaciones\n", maxcalif);
    printf ("--> Para modificar el numero calificaciones a ingresar porfavor regresa al codigo y \n    sigue las intrucciones en el comentario MODIFICAR CALIFICACIONES A INGRESAR al inicio del mismo\n");
    printf ("\nPorfavor ingresa las calificaciones\n\n");

    for (z=0;z<=10;z++) //INICIALIZAR LOS DATOS DEL ARREGLO FRECUENCIAS A 0
        frecuencias[z]=0;

    for (i=0;i<=TAC-1;i++) //AQUI SE GUARDAN LAS CALIFICACIONES INGRESADAS EN EL ARREGLO CALIFICACIONES
    {
        printf ("Calificacion %i: ",i+1);
        scanf ("%i",&calificaciones[i]);
        while (calificaciones[i]<0||calificaciones[i]>10) //Si el usuario introduce una calificaciones no valida se repetira el scanf
        {
            printf ("Introduce una calificacion valida\n");
            printf ("Calificacion %i: ",i+1);
            scanf ("%i",&calificaciones[i]);
        }
        suma+=calificaciones[i];
        frecuencias[calificaciones[i]]++;
    }

    /**SEGMENTO PARA OBTENER LA MEDIA*/

    media=(float)suma/TAC;

    /**SEGMENTO PARA OBTENER LA MODA*/

    sub_max=0; //ESTE SEGMENTO DE CODIGO NOS DA EL SUBINDICE DEL NUMERO QUE MAS SE REPITE
    for (j=0;j<=TAC;j++)
    {
        if (frecuencias[j]>frecuencias[sub_max])
            sub_max=j;
    }

    /**SEGMENTO PARA CALCULAR LA MEDIANA*/

    for (y=0;y<=TAC-1;y++) //FOR QUE ESTABLECE EL VECES QUE SE REPETIRA LA CAMPARACION
    {
        for (i=0;i<=TAC-1;i++) //FOR QUE COMPARA UN NUMERO CON TODOS LOS DEMAS
        {
            if (calificaciones[i]>calificaciones[i+1]) //IF QUE COMPARA LOS DOS PRIMEROS NUMEROS
            {
                vtemp=calificaciones [i];
                calificaciones [i]=calificaciones[i+1];
                calificaciones [i+1]=vtemp;
            }
        }
    }

    printf("\n\nNUMEROS ORDENADOS\n\n");
    for (i=0;i<=TAC-1;i++) //FOR QUE IMPRIME LOS NUMEROS ORDENADOS -------->SE PUEDE BORRAR
    {
        printf("%i\n", calificaciones[i]);
    }
    printf ("\n\n");

        if (ne%2==0) //CONDICION PARA DETERMINAR SI EL NUMERO DE CALIFICACIONES INGRESADO ES PARA O IMPAR
            {//NUMERO PAR- SE TOMAN LOS DOS DATOS DEL ARREGLO QUE OCUPAN LAS POSICIONES DEL MEDIO Y SE SACA EL PROMEDIO DE AMBOS
                pos1=TAC/2;
                pos2=pos1-1;
                mediana= (float)(calificaciones[pos1]+calificaciones[pos2])/2;
            }
        else
            {//NUMERO IMPAR- SE TOMA EL DATO DEL ARREGLO QUE OCUPA LA POSICION DEL MEDIO
                posm=(TAC-1)/2;
                mediana =calificaciones[posm];
            }

    /**SEGMENTO PARA IMPRIMIR LA MEDIA, MEDIANA Y MODA*/
    printf("\n---> La media de las calficaciones es: %.2f\n\n",media);
    printf("---> La moda de las calificaciones es: %i\n\n",sub_max);
    printf("---> La mediana es: %.2f\n\n",mediana);

    /**SEGMENTO PARA COLOCAR EL HISTOGRAMA DE LAS CALIFICACIONES*/
    printf("\t\tHISTOGRAMA\n\n");
    printf("  CALIFICACION\t ALUMNOS     ASTERISCO\n");

    for (z=0;z<=10;z++) //IMPRIMIR EL NUMERO DE VECES QUE SE REPITE CADA CALIFICACION
    {
        printf("\t%i\t    %i\t\t",z,frecuencias[z]); //IMPRIMIR LA CALIFICACION Y EL NUEMRO DE VECES QUE SE REPITE DICHA CALIFICACION
        for(x=1;x<=frecuencias[z];x++) //FOR PARA IMPRIMIR UN ASTERISCO DEACUERDO AL NUMERO DE VECES QUE SE REPITE CADA CALIFICACION
            printf ("*");
        printf("\n");
    }

    /**SEGMENTO PARA DESPEDIRSE Y SALIR DEL PROGRAMA*/
    printf ("\n");
    printf("Presiona una tecla para salir\n\n");
    getch ();

    //system("cls"); //SEGMENTO DE CODIGO PARA IMPRIMIR UNA FIRMA
    system("color 6");
    printf ("*******************************************************************\n\n");
    printf("\t\t:D    GRACIAS POR VISITARNOS    :D\n\n");
    printf ("*******************************************************************\n\n");
    firmalalo();
    getch();

    //system("cls"); //SEGMENTO DE CODIGO PARA IMPRIMIR UNA FIRMA
    system("color 3");
    printf ("*******************************************************************\n\n");
    printf("\t\t:D    GRACIAS POR VISITARNOS    :D\n\n");
    printf ("*******************************************************************\n\n");
    firmaodin();
    return 0;
}

void firmalalo (void)//FUNCION QUE SIRVE PARA IMPRIMIR UNA FIRMA
{
    printf("                                          _.._\n");
    printf("         __                              \(    \)\n");
    printf("        |  \\   THE                   .--.\\   /\n");
    printf("        |__/ _    ___   _ _          \( \)\) \\_.-,\n");
    printf("        |  \\|_ /\\  | | |_\(_          _`\\  \( \(\( \)\n");
    printf("        |__/|_/``\\ | |_|_ _\)        \( ``|  |  |\n");
    printf("                   '                 `|_|__|__|\n");
    printf("                                     /_ __ _ __|\n");
    printf("                                   .-L_7__7_7_7|\n");
    printf("_______                           \(   ,----,  \(`.\n");
    printf("\\\"\"\"\"\";`.                         |  .\\ \\ / /.|  \\\n");
    printf("/    [|  \\                        |  :-.-\"-,-:|   `-------.\n");
    printf("\\    [|   `-.___________________.-'  |_:_Q_:_|`-._______\)  `----------.._\n");
    printf("/    [|         \(       /   |        \"\"\"\"\"\"\"\"\" .------------------' \(__\) `.\n");
    printf("\\    [|          `-----'    |                 /  .--.  .--. .--.  .--.    ;\n");
    printf("/_____;                     7----------------'  :    ;:    ;;   ;:    :  /\n");
    printf("\"\"\"\"\"\"\"\"\"-.               .'   S$S S$S S$S S$S   `--'  `--' `--'  `--' .'\n");
    printf("          ,\)              |                            |\"\"\"\"\"\"\"\"|     \(\n");
    printf("          0-------....._  |             _________      |        |      \)\n");
    printf("          '             `.|           .\"         \".    |        |    .'\n");
    printf("                          `-._        |           |    |________| .-'\n");
    printf("                              `-..____|___________|_________...--'\n");
    printf("\n");
    printf("             ___________    .___                     .___\n");
    printf("             \\_   _____/  __| _/_ _______ _______  __| _/____\n");
    printf("              |    __\)_  / __ |  |  \\__  \\\\_  __ \\/ __ |/  _ \\\n");
    printf("              |        \\/ /_/ |  |  / __  \\|  | \\/ /_/ \(  <_> \)\n");
    printf("             /_______  /\\____ |____/\(____  /__|  \\\____ |\\____/\n");
    printf("                     \\/      \\/          \\/           \\/\n");
}
void firmaodin (void) //FUNCION QUE SIRVE PARA IMPRIMIR UNA FIRMA
{
    printf("___|\)____ _______  ______   _ _              _____   _ _   _ _ ___|\)____\n");
    printf("___/_____ |     |  |     \\   |   |\\    |         /    |     |  ___/_____ \n");
    printf("__/|_____ |     |  |      \\  |   | \\   |        /     |     |  __/|_____\n");
    printf("_/(|,\\___ |     |  |      |  |   |  \\  |       /      |_____|  _/(|,\\___\n");
    printf("_\\_|_/___ |     |  |      /  |   |   \\ |      /       |     |  _\\_|_/___\n");
    printf("   |      |_____|  |_____/  _|_  |    \\|     /____   _|_   _|_    |      \n");
    printf(" (_|                                                            (_|     \n");
    printf("        ________   ________    _________  ____________;_\n");
    printf("        - ______ \\ - ______ \\ / _____   //.  .  ._______/  mm.           dM8\n");
    printf("       / /     / // /     / //_/     / // ___   /\t   YMMMb.       dMM8\n");
    printf("      / /     / // /     / /       .-'//_/|_/,-'\t    YMMMMb     dMMM'\n");
    printf("     / /     / // /     / /     .-'.-'\t\t\t     `YMMMb   dMMMP\n");
    printf("    / /     / // /     / /     / /\t\t\t       `YMMM  MMM'\n");
    printf("   / /     / // /     / /     / /\t\t\t          MbdMP\n");
    printf("  / /_____/ // /_____/ /     / /\t\t\t      .dMMMMMM.P\n");
    printf("  \\________- \\________-     /_/\t\t\t\t     dMM  MMMMMM\n");
    printf("\t\t\t\t\t\t\t     8MMMMMMMMMMI\n");
    printf("\t\t\t\t\t\t\t      YMMMMMMMMM\n");
    printf("\t\t\t\t\t\t\t        MMMMMMP\n");
    printf("\t\t\t\t\t\t\t       MxM .mmm\n");
    printf("\t\t\t\t\t\t\t       W W  === \n");
}
