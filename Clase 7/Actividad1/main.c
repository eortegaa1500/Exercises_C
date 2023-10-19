/*Programa que recibe un entero y devuelve su factorial*/

#include <stdio.h>
#include <stdlib.h>

double factorial (int n);
void firma (void);

int main()
{
    int num;
    double f;

    printf("\t\t\t\tFACTORIAL DE UN NUMERO\n");
    printf("Hola :D, en este programa tienes que ingresar un numero entero y te devolvera su factorial\n");
    printf("Porfavor, introduce un numero:\n");
    scanf("%i",&num);

    f = factorial(num);

    printf("Su factorial es: %.0f\n",f);
    printf ("Gracias por visitarnos :D\n");
    system ("pause");
    system ("cls");

    firma();

    system ("pause");
    return 0;
}//fin de main

double factorial(int n)
{
    int i;
    double fact=1;
    for (i=2;i<=n;i++)
        fact*=i;
    return fact;
}

void firma (void)
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
