#include <stdlib.h>
#include <stdio.h>



int cant,vec[100];
void llenar();
int calcularSuma(int vec[],int cant);



int main(){
llenar();
printf("la suma es : %d",calcularSuma(vec,cant));
return 0;
}
void llenar(){
printf("Digite el numero de elementos del arreglo: ");
	scanf("%d",&cant);

	for(int i=0;i<cant;i++){
		printf("%d",i+1);
		printf(". Digite un numero: ");
		scanf("%d",&vec[i]);
	}

}

int calcularSuma(int vec[],int tam){
	int suma=0;

	for(int i=0;i<tam;i++){
		suma=suma+vec[i];
	}
	return suma;
}

