#include <stdio.h>
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
    printf("El paciente %s \n",mediPacient1.nombrep);
    printf("Esta siendo atendido por el medico %s \n",mediPacient1.nombrem);
    printf("En la especilidad de %s \n",mediPacient1.especialidad);
    printf("Por el tratamiento de %s \n",mediPacient1.tratamiento);
    printf("En la clinica %s \n",clinica1.nombrec);
    printf("Ubicada en %s \n",clinica1.direccion);
    printf("Valor a cancelar %f \n",datos.costo);
    getch();
    return;
}
