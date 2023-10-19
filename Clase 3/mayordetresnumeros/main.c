/* Ortega Alvarez Eduardo 5IM4
En este programa el usuario introduce tres numeros,
el programa elige el mayor de ellos*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaracion de variables
    int n1,n2,n3;

    printf("Hola :D, en este programa se elige el mayor de tres numeros enteros.\n");

    printf("Introduce el primer numero:\n");
    scanf("%i",&n1);

    printf("Introduce el segundo numero:\n");
    scanf("%i",&n2);

    printf("Introduce el tercer numero:\n");
    scanf("%i",&n3);

    if (n1==n2&&n2==n3) //Si los tres numeros son iguales
        printf ("Los tres numeros son iguales. El numero es %i", n1);

    else if (n1>n2) //n2n1
            if (n1>n3) //n2n1 y n3n1
                printf("El mayor de los numeros es %i",n1);
            else //n2n1 pero n1n3
                printf("El mayor de los numeros es %i",n3);
        else //n1n2
            if (n2>n3) //n1n2 y n3n2
                printf("El mayor de los numeros es %i",n2);
            else //n1n2 pero n2n3
                printf("El mayor de los numeros es %i",n3);

    printf("\n\n");
    printf("Gracias por visitarnos\n");

    getch(); //Firma

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

    getch ();
    return 0;
} //Fin de main
