#include <stdlib.h>
#include <stdio.h>
int tam,p,v[100];
char band='F';
void llenar (int v[],int tam);
void buscar (int v[],int p);
int main(){
    llenar(v,tam);
    buscar(v,p);
    return 0;
}
void llenar(int v[],int tam){
    //almacenar n numeros
    printf("ingrese el tamaño del arreglo: ");
    scanf("%d",&tam);
    for(int i=0;i<tam;i++){
            printf(".%d ",i+1);
             printf("ingrese un numero: ");
           scanf("%d",&v[i]);
    }
}
void buscar(int v[],int p){
     //metodo de busqueda secuencial
     int i=0;
    printf("ingrese un numero para bucar su posicion: ");
    scanf("%d",&p);
while((band=='F')&&(i<p)){
    if(v[i]==p){
        band='V';
    }
    i++;
}
if(band=='F'){
    printf("el numero no ha sido encontrado");
}else{
    if(band=='V'){
    printf("el numero esta en la posicion: %d",i);
    }
}
}
