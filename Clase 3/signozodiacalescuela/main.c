/*Este programa recibe una fecha de nacimiento como
dos enteros (dia y mes) y muestra el signo zodiacal
correspondiente*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
int dia,mes;

    printf("Hola, con este programa podras conocer tu signo zodiacal.\n\n");

    printf("Porfavor introduce tu dia de nacimiento.\n");
    scanf("%i",&dia);

    printf("Ahora introduce el numero de tu mes de nacimiento.\n Ejemplo: Si naciste en mayo introduce 5.\n Si naciste en agosto introduce 8.\n");
    scanf("%i",&mes);

    printf("Tu signo zodiacal es:\n");

    if (mes==1&&dia>=20||mes==2&&dia<=18) //Acuario Ene 20 - Feb 18
        printf("Acuario");
    else if (mes==2&&dia>=19||mes==3&&dia<=20) //Piscis Feb 19 - Mar 20
            printf("Piscis");
        else if (mes==3&&dia>=21||mes==4&&dia<=19) //Aries Mar 21 - Abr 19
                printf("Aries");
            else if (mes==4&&dia>=20||mes==5&&dia<=20) //Tauro Abr 20 - May 20
                    printf("Tauro");
                else if (mes==5&&dia>=21||mes==6&&dia<=20) //Geminis May 21 - Jun 20
                        printf("Geminis");
                    else if (mes==6&&dia>=21||mes==7&&dia<=22) //Cáncer Jun 21 - Jul 22
                            printf("Cancer");
                        else if (mes==7&&dia>=23||mes==8&&dia<=22) //Leo Jul 23 - Ago 22
                                printf("Leo");
                            else if (mes==8&&dia>=23||mes==9&&dia<=22) //Virgo Ago 23 - Sep 22
                                    printf("Virgo");
                                else if (mes==9&&dia>=23||mes==10&&dia<=22) //Libra Sep 23 - Oct22
                                        printf("Libra");
                                    else if (mes==10&&dia>=23||mes==11&&dia<=21) //Escorpio Oct 23 - Nov 21
                                            printf("Escorpio");
                                        else if (mes==11&&dia>=22||mes==12&&dia<=21) //Sagitario Nov 22 - Dic 21
                                                printf("Sagitario");
                                            else if (mes==12&&dia>=22||mes==1&&dia<=19) //Capricornio Dic 22 - Ene 19
                                                    printf("Capricornio");

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
