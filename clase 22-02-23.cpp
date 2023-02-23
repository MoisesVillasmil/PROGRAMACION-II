#include <stdio.h>
#include <stdlib.h>
typedef struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char estado[20];
};
struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];
int main(){
	for(int i=0;i<2;i++){
		fflush (stdin);
		printf("%i Digite el nombre del empleado: \n",i+1);
		gets(empleados[i].nombre);
		printf("%i Digite la direccion del empleado: \n",i+1);
		gets(empleados[i].dir_empleado.direccion);
		printf("%i Digite la ciudad del empleado: \n",i+1);
		gets(empleados[i].dir_empleado.ciudad);
		printf("%i Digite el estado donde vive el empleado: \n",i+1);
		gets(empleados[i].dir_empleado.estado);
		printf("%i Digite el salario del empleado(sea GENEROSO): \n",i+1);
		scanf("%lf",&empleados[i].salario);
		printf("\n");
	}
	for (int i=0;i<2;i++){
		printf("\n\n Datos del empleado # %i",i+1);
		printf("\n  Nombre: %s",empleados[i].nombre);
		printf("\n  Direccion: %s",empleados[i].dir_empleado.direccion);
		printf("\n  Salario: %.2lf",empleados[i].salario);     
		printf("\n  Ciudad:%s ",empleados[i].dir_empleado.ciudad);   
		printf(" Estado:%s",empleados[i].dir_empleado.estado);
	}
return 0;

}