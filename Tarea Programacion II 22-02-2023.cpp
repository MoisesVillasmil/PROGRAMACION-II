#include <stdio.h>
#include<stdlib.h>
int matrizA[10][10],i,j,e,f,matrizB[10][10],e2,f2,k,matrizC[10][10];
int main() {
	printf("ingrese el numero de filas: ");
	scanf("%d",&e);
	printf("ingrese el numero de columnas: ");
	scanf("%d",&f);
	
	for(i=0;i<e;i++){
		for(j=0;j<f;j++){
			printf("Ingrese el valor de [%d][%d]: \n",i+1,j+1);
			scanf("%d",&matrizA[i][j]);
		}
	}
	do{
		printf("ingrese el numero de filas: ");
		scanf("%d",&e2);
		printf("ingrese el numero de columnas: ");
		scanf("%d",&f2);
		
		if(e2 !=f){
			printf("las filas de la matriz B deben ser de las mismas dimensiones de las columnas A :( \n");
		}
	}while (f !=e2);
	
	for(i=0;i<e2;i++){
			for(j=0;j<f2;j++){
				printf("ingrese el valor de [%d][%d]: ",i+1,j+1);
				scanf("%d",&matrizB[i][j]);
			}
		}
		for (i=0;i<e;i++){
			for(j=0;j<f2;j++){
				matrizC[i][j]=0;
				for (k=0;k<f;k++){
				matrizC[i][j]+=matrizA[i][k]*matrizB[k][j];	
				}
			}
		}	
	
	printf("Matriz A:\n");
	for(i=0;i<e;i++){
		for( j=0;j<f;j++){
			printf("[%d]",matrizA[i][j]);
		}
		printf("\n");
	}
	printf("Matriz B:\n");
	for(i=0;i<e2;i++){
		for(j=0;j<f2;j++){
			printf("[%d]",matrizB[i][j]);
		}
		printf("\n");
	}
	printf("Matriz de la multiplicacion: \n");
	for(i=0;i<e;i++){
		for(j=0;j<f;j++){
			printf("[%d]",matrizC[i][j]);
	}	
	printf("\n");
	}
	return 0;
}