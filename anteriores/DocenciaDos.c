#include<stdio.h>

int main()
{
    int x, y, res;
    printf("Ingrese numero uno: ");
    scanf("%i",&x);
    printf("Ingrese numero dos: ");
    scanf("%i",&y);

    if(x > 100 || y > 100)
    {
        printf("solo numeros del 1 AL 100");
    }
    else
    {
        for(res = 0; y < x; res++) y++;
        printf("la diferencia es %d", res);
    }


    getchar();
    return 0;
}
