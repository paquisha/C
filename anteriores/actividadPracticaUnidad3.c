#include<stdio.h>

int main()
{
    //declaramos las variables que usaremos
    int n;
    int numeros[100];//como no se el numero que quiero poner el tama;o del array le pongo ese valor
    int multiplicacion = 1;//debemos inicializar en 1 ya tood numero multiplicado por 0 es 0

    //ingresamos el numero para el tama;o del vector
    printf("Ingrese numero de elementos que va a tener el arreglo: ");
    scanf("%i",&n);
    //aqui ingresamos los datos al array
    for(int i = 0; i < n; i++)
    {
        printf("Ingrese numeros: ");
        scanf("%i",&numeros[i]);
    }
    //aqui recorremos el array y multiplicamos por cada elemento
    for(int i = 0; i < n; i++)
    {
        multiplicacion*=numeros[i];
    }
    printf(" resultado de la multilplicacion es: %i",multiplicacion);

    getchar();
    return 0;
}

