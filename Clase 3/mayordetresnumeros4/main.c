/*Este programa, recibe tres numeros enteros y devuelve el mayor de ellos*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;

    printf("  Hola :D, en este programa se introducen tres numeros enteros, y el programa te devuelve el mayor de ellos\n");

    printf ("Porfavor introduce el primer numero:\n");
    scanf ("%i",&n1);

    printf ("Porfavor introduce el segundo numero:\n");
    scanf ("%i",&n2);

    printf ("Porfavor introduce el tercer numero:\n");
    scanf ("%i",&n3);

    if (n1>=n2&&n1>=n3) //n1 es mayor a n2 y a n3, n1 mayor
        printf("El mayor de los numeros es %i", n1);
    else if (n2>=n1&&n2>=n3) //n2 es mayor a n1 y a n3, n2 mayor
            printf("El mayor de los numeros es %i", n2);
        else if (n3>=n1&&n3>=n2)
                printf("El mayor de los numeros es %i", n3); //n3 es mayor a n2 y n1, n3 mayor

    printf("\n Gracias por visitarnos :D\n\n");

    getch (); //Firma

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
    getch();

    return 0;
} //Fin de main
