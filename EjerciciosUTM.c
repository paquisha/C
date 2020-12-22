#include<stdio.h>

int main()
{
    int num1, num2, num3, suma, multiplicacion;
    printf("Ingrese numero uno: ");
    scanf("%i",&num1);
    printf("Ingrese numero dos: ");
    scanf("%i",&num2);
    printf("Ingrese numero tres: ");
    scanf("%i",&num3);
    suma = num1 + num2;
    multiplicacion = suma * num3;
    printf("resultado de la operacion es: ");
    printf("%i",multiplicacion);
    getchar();
    return 0;
}

