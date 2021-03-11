#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct  {
    char doctor[50];
    char paciente[50];
    int cedula[20];
    char diagnostico[50];
    char tratamiento[50];
}tregistro;
void continuar(){
    printf("\nPresione una tecla para continuar\n\n");
    getch();
}
void crear_registro_medico(){
    FILE *arch;
    arch=fopen("diagnosticos.txt","rb");
    if(arch==NULL)
      exit(1);
    tregistro registro;
    system("cls");
    printf("\nIngrese el nombre del Doctor o Doctora \n");
    fflush(stdin);
    gets(registro.doctor);
    printf("\nIngrese el nombre del paciente \n");
    gets(registro.paciente);
    printf("\nIngrese la c%cdula del paciente \n",130);
    gets(registro.cedula);
    printf("\nIngrese el diagnostico medico \n");
    gets(registro.diagnostico);
    printf("\nIngrese el tratamiento medico \n");
    gets(registro.tratamiento);
    fwrite(&registro, sizeof(tregistro),1,arch);
    fclose(arch);
    continuar();
}

//actualiza aqui
void actualizar_registro_medico(){
    FILE *arch;
    arch=fopen("diagnosticos.txt","r+t");
    if(arch==NULL)
      exit(1);
    printf("Ingrese la cedula del paciente\n");
    int codigo;
    scanf("%i",&codigo);
    tregistro registro;
    int existe=0;
    fread(&registro, sizeof(tregistro), 1, arch);
    while (!feof(arch))
    {
        if (codigo==registro.cedula)
        {
            char a;
            printf("\n Nombre del Doctor o Doctora: %s\n Nombre del paciente: %s\n C%cdula de paciente: %s\n Diagnostico medico: %s\n Tratamiento medico: %s\n", registro.doctor, registro.paciente, 130, registro.cedula, registro.diagnostico, registro.tratamiento);
            printf("\nResponsa con Y o N\n");
            printf("\n¿Desea cambiar el nombre del Doctor o Doctora\n");
            scanf("%s",&a);
            if (a=="Y")
            {
                printf("\nEscriba el nuevo nombre del Doctor o Doctora\n");
                gets(registro.doctor);
                char pos=ftell(arch)-sizeof(tregistro);
                fseek(arch,pos,SEEK_SET);
                fwrite(&registro, sizeof(tregistro), 1, arch);
                printf("\nSe modifico el nombre del Doctor o Doctora\n");
                existe=1;
                break;
            }
            else if (a=="N")
            {
                continuar();
            }
            char b;
            printf("\nResponsa con Y o N\n");
            printf("\n¿Desea cambiar el nombre del paciente?\n");
            scanf("%s",&b);
            if (b=="Y")
            {
                printf("\nEscriba el nuevo nombre del Doctor o Doctora\n");
                gets(registro.paciente);
                char pos=ftell(arch)-sizeof(tregistro);
                fseek(arch,pos,SEEK_SET);
                fwrite(&registro, sizeof(tregistro), 1, arch);
                printf("\nSe modifico el nombre del paciente\n");
                existe=1;
                break;
            }
            else if (b=="N")
            {
                continuar();
            }
            char c;
            printf("\nResponsa con Y o N\n");
            printf("\n¿Desea cambiar la cedula del paciente?\n");
            scanf("%s",&c);
            if (c=="Y")
            {
                printf("\nEscriba la nueva cedula del Doctor o Doctora\n");
                gets(registro.cedula);
                char pos=ftell(arch)-sizeof(tregistro);
                fseek(arch,pos,SEEK_SET);
                fwrite(&registro, sizeof(tregistro), 1, arch);
                printf("\nSe modifico el n%cmero de la c%cdula\n",163,130);
                existe=1;
                break;
            }
            else if (c=="N")
            {
                continuar();
            }
            char d;
            printf("\nResponsa con Y o N\n");
            printf("\n¿Desea cambiar el diagnostico del paciente?\n");
            scanf("%s",&d);
            if (d=="Y")
            {
                printf("\nEscriba el nuevo diagnostico del paciente\n");
                gets(registro.diagnostico);
char pos=ftell(arch)-sizeof(tregistro);
                fseek(arch,pos,SEEK_SET);
                fwrite(&registro, sizeof(tregistro), 1, arch);
                printf("\nSe modifico el diagnostico del paciente\n");
                existe=1;
                break;
            }
            else if (d=="N")
            {
                continuar();
            }
            char e;
            printf("\nResponsa con Y o N\n");
            printf("\n¿Desea cambiar el tratamiento del paciente?\n");
            scanf("%s",&e);
            if (e=="Y")
            {
                printf("\nEscriba el nuevo tratamiento del paciente\n");
                gets(registro.tratamiento);
                char pos=ftell(arch)-sizeof(tregistro);
                fseek(arch,pos,SEEK_SET);
                fwrite(&registro, sizeof(tregistro), 1, arch);
                printf("\nSe modifico el tratamiento del paciente\n");
                existe=1;
                break;
            }
            else if (e=="N")
            {
                continuar();
            }
        }
        fread(&registro, sizeof(tregistro), 1, arch);
    }
    if(existe==0)
        printf("No existe registro de este Doctor o Doctora\n");
        fclose(arch);
        continuar();


}
void listado_de_registro_medico(){
    FILE *arch;
    arch=fopen("diagnosticos.txt","rb");
    if(arch==NULL)
      exit(1);
    tregistro registro;
    fread(&registro, sizeof(tregistro),1,arch);
    while (!feof(arch))
    {
        printf("\n Nombre del Doctor o Doctora: %s\n Nombre del paciente: %s\n C%cdula del paciente: %s\n Diagnostico medico: %s\n Tratamiento medico: %s\n", registro.doctor, registro.paciente, 130, registro.cedula, registro.diagnostico, registro.tratamiento);
        fread(&registro, sizeof(tregistro), 1, arch);
    }
    fclose(arch);
    continuar();
}
int main(){
    int opcion;
    do{
       printf("1 - crear registro medico\n");
       printf("2 - Actualizar registro medico\n");
       printf("3 - Listado de registros medicos\n");
       printf("4 - Finalizar\n\n");
       scanf("%i",&opcion);
       switch (opcion)
       {
       case 1:crear_registro_medico();
           break;
       case 2:actualizar_registro_medico();
           break;
       case 3:listado_de_registro_medico();
           break;
       }

    }while (opcion!=4);
    return 0;
    getch();

}
