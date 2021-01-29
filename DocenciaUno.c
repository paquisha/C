#include<stdio.h>

int main()
{
    int mes, anio;
    printf("ingrese mes: ");
    scanf("%i",&mes);
    //printf("Introduzca a%co: ", 164);
    printf("Ingrese el a%co: ", 164);
    scanf("%i",&anio);

    switch(mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("tiene 31 dias");
                 break;
        case 4:
        case 6:
        case 9:
        case 11: printf("tiene 30 dias");
                 break;
        case 2:
            if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
                printf("tiene 29 dias");
            else
                printf("tiene 28 dias");
        default : printf("Mes incorrecto");
    }
    getchar();
    return 0;
}
