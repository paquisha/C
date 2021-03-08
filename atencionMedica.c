#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Clinica
{
    char nombrec[30];
    char direccion[40];
};
struct MedicoPaciente
{
    char nombrep[30];
    char tratamiento[40];
    char nombrem[30];
    char especialidad[40];
};
struct Datos
{
    float costo;

};
int main()
{
    struct Clinica clinica1;
    printf("Ingrese nombre de la clinica: ");
    gets(clinica1.nombrec);
    printf("Ingrese direccion: ");
    gets(clinica1.direccion);

    struct MedicoPaciente mediPacient1;
    printf("Ingrese nombre del medico: ");
    gets(mediPacient1.nombrem);
    printf("Ingrese nombre de la especialidad del medico: ");
    gets(mediPacient1.especialidad);
    printf("Ingrese nombre del paciente: ");
    gets(mediPacient1.nombrep);
    printf("Ingrese nombre del tratamiento: ");
    gets(mediPacient1.tratamiento);

    struct Datos datos;
    printf("Ingrese valor a cancelar: ");
    scanf("%f",&datos.costo);

    getch();
    return;
}
