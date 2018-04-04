#include <stdlib.h>
#include <stdio.h>
int men=99999;
int tam,vec[100];
void menor(int vec[],int tam);

int main(){
menor(vec,tam);
    return 0;
}
//funcion
void menor(int vec[],int tam){
//llenar el vector con el tamaño ingresado por el ususario
printf("ingrese el tamaño del arreglo: ");
scanf("%d",&tam);
printf("llene el arreglo:\n");
for(int i=0;i<tam;i++){
        printf("%d: ",i+1);
    scanf("%d",&vec[i]);
}
//sacar el menor de todos los elemntos
for(int i=0;i<tam;i++){
    if(vec[i]<men){
        men=vec[i];
    }
}
printf("el menor es:%d",men);
}
