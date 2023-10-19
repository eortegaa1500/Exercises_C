#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec;
    printf("Si deseas ver este video presiona 1\n");
    scanf("%i",&dec);
    if (dec=1)
    {
       system ("start C: windows32 chrome.exe www.google.com");
    }
    system ("pause");
    return 0;
}
