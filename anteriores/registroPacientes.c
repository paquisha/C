#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
struct datos{
char nombre[30];
char doctor[30];
char diagnostico[100];
char tratamiento[100];
}pacientes[3];
int main(){
int opcion;
int resp;
    printf (" MENU OPCIONES \n");
    printf ("1) Registrar paciente\n");
    printf ("2) Mostrar pacientes registrados\n");
    printf ("3) Actualizar datos de pacientes registrados\n");
    printf ("4) Guardar o actualizar registros\n");
 do{
    printf ("Digite el numero de la accion a realizar:  ");
    scanf ("%d",&opcion);
    fflush(stdin);
    switch(opcion){
     case 1:{
      for (int i=0;i<3;i++){
       printf("\n REGISTRO DE PACIENTES \n");
       printf ("INGRESA LOS DATOS DEL PACIENTE #%d A CONTINUACION: \n",i+1);
       printf("\nNombre: ");
       fgets (pacientes[i].nombre,30,stdin);
       printf ("Doctor a cargo: ");
       fgets (pacientes[i].doctor,30,stdin);
       printf ("Diagnostico: ");
       fgets (pacientes[i].diagnostico,100,stdin);
       printf ("Tratamiento a seguir: ");
       fgets (pacientes[i].tratamiento,100,stdin);
       };
    };
       break;
    case 2:{
     printf("\n DATOS DE LOS PACIENTES REGISTRADOS \n");
      for (int i=0;i<3;i++){
        printf("\n--Paciente #%d---\n",i+1);
        printf("Nombre: %s ",pacientes[i].nombre);
        printf("Doctor a cargo: %s ",pacientes[i].doctor);
        printf("diagnostico: %s ",pacientes[i].diagnostico);
        printf("Tratamiento a seguir: %s \n",pacientes[i].tratamiento);
    };
};
    break;
    case 3:{
    printf("\nINGRESA EL NUMERO DEL PACIENTE A MODIFICAR: ");
    scanf("%d",&resp);
    fflush(stdin);
    printf ("----Nuevos datos del pacinte #%d\n----",resp);
    printf("\nNombre: ");
    fgets (pacientes[resp-1].nombre,30,stdin);
    printf ("Doctor a cargo: ");
    fgets (pacientes[resp-1].doctor,30,stdin);
    printf ("Diagnostico: ");
    fgets (pacientes[resp-1].diagnostico,100,stdin);
    printf ("Tratamiento a seguir: ");
    fgets (pacientes[resp-1].tratamiento,100,stdin);
};
    break;
    case 4:{
   FILE *archivo;
   archivo = fopen ( "registro.txt", "w" );
    for (int i=0;i<3;i++){
        fprintf (archivo,"Nombre: %s ",pacientes[i].nombre);
        fprintf (archivo,"Doctor: %s",pacientes[i].doctor);
        fprintf (archivo,"Diagnostico: %s",pacientes[i].diagnostico);
        fprintf (archivo,"Tratamiento: %s\n",pacientes[i].tratamiento);
    };
        fclose(archivo);
        printf("--\nLos datos se han guardado Correctamente\n");
        main();
    };
break;
    case 5: {
    default: printf("Seleccione una opcion correcta\n\n");
    printf("\nDIgite el numero que corresponda a la opcion deseada\n");
    main();
        };
  };
}while(opcion);
return 0;
}
