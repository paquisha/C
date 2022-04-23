#include<stdio.h>

int main()
{
    float total, propina, subTotal, unitario;
    int personas;
    printf("Ingrese total a pagar:");
    scanf("%f",&total);
    printf("Ingrese propina:");
    scanf("%f",&propina);
    printf("Ingrese cantidad de personas:");
    scanf("%i",&personas);
    subTotal = total + propina;
    unitario = subTotal/personas;
    printf("total + propina: ");
    printf("%f",subTotal);
    printf("Valor por persona:");
    printf("%f", unitario);
    getchar();
    return 0;
}
