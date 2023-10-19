/*                              Ortega Alvarez Eduardo 5IM4
                FACTORIAL DE UN NUMERO
Este programa recibe un numero entero y devuelve su factorial*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    double mult=1;

    printf("\t\t\t\tFACTORIAL DE UN NUMERO\n");
    printf("Hola :D, en este programa tienes que ingresar un numero entero y te devolvera su factorial\n");
    printf("Porfavor, introduce un numero:\n");
    scanf("%i",&num);

    for (;num>=1;num--)//Cuando num<1 no se cumple la condicion
         mult*=num; //mult=mult*num

    printf("Su factorial es: %.0f\n",mult);
    printf ("Gracias por visitarnos :D\n\n\n");

    getch();//Firma
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
}//Fin de main
