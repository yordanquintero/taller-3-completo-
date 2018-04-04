#include <stdio.h>
#include <stdlib.h>
void pedir();
void comprovar (int vec[],int);
int tam;
int vec[100];


int main(){
pedir ();
comprovar (vec,tam);
    return 0;
}


//funcion de pedir datos
void pedir (){
printf("Digite el numero de elementos del vector: ");
	scanf("%d",&tam);
	for(int i=0;i<tam;i++){
        printf("%d",i+1);
		printf(". Digite un numero: ");
		scanf("%d",&vec[i]);
	}
}

//funcion de comprovar si estan en orden
void comprovar (int vec[],int tam){
char band = 'F';
int i=0;
while((band=='F')&&(i<tam-1)){
    if(vec[i]>vec[i+1]){

        band='V';
    }
    i++;
}
if(band=='F'){
    printf("el arreglo esta ordenado");


}else{
printf("el arreglo no esta ordenado");

}
}
