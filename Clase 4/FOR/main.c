#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i=0; i<=255; i++)
    {
        printf("%i\t%c\n",i,i);
    }
    printf("\n%c",'j'); //106
    printf("\n%c",'j'-32); //106-32
    getch ();
    return 0;
}
