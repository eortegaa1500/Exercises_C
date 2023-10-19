#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int max=10;

    for (a=1; a<=max; a++)
        for (b=1;b<=max;b++) //Solo avanza hasta que recorre el cuerpo
            for (c=1;c<=max;c++)

    if (a*a+b*b==c*c)
        printf("%i, %i, %i\n",a,b,c);

    getch ();

    return 0;
}
