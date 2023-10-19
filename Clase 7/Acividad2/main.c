#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("NUMERO ALEATORIO\n\n");

    int n;
    int i;
    srand (time(NULL));
    for (i=1;i<=3;i++)
    {
        n = rand ()%6+1;
        printf("\n%i",n);
    }

    return 0;
}
