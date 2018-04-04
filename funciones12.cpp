#include <stdlib.h>
#include <stdio.h>
void cambiarsigno(int vec[],int);
int vec[100],tam;
int main(){
    printf("ingrese el tamaño del vector: ");
    scanf("%d",&tam);
    //leer los numeros del vector
    for(int i=0;i<tam;i++){
        printf("digite un numero: ");
        scanf("%d",&vec[i]);
    }
    cambiarsigno(vec,tam);
    return 0;
    }
void cambiarsigno(int vec[],int tam){
    for(int i=0;i<tam;i++){

        vec[i]=vec[i]*-1;
    }
    for(int i=0;i<tam;i++){
        printf("%d\n",vec[i]);


    }
}
