#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre[10][20];
    char aux[20];
    int i,j,k;
    int l=0;
    printf("Para terminar escriba * \n");
    do
        {
            printf("Introduce un nombre: ");
            gets(nombre[l]);//lee y almacena los arrays
            l++;
        }
    while (strcmp(nombre[l-1],"*")!=0);//condicion que permite comparar los arrays

    //ciclo para ordenar las cadenas
    for(i=0; i<l-1; i++)
    {
        k=i;
        strcpy(aux, nombre[i]);
        for(j=i+1; j<l; j++)
        {
            if(strcmp(nombre[j], aux)<0)
            {
                k=j;
                strcpy(aux, nombre[j]);
            }
        }
        strcpy(nombre[k],nombre[i]);
        strcpy(nombre[i],aux);
    }

    for(i=0; i<l; i++)
    {
        printf("%s",nombre[i]);
        printf("\n");
    }

  return 0;
}
