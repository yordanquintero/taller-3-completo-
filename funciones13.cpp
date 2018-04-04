#include <stdio.h>
#include <stdlib.h>
int vec[100],tam;

int num;
void vectorimpar(int vec[],int);
int main(){
    printf("ingrese el tamaño del vector: ");
    scanf("%d",&tam);
    for(int i=0;i<tam;i++){
        printf("%d",i+1);
        printf(" .ingrese un numero: ");
        scanf("%d",&vec[i]);
    }
    vectorimpar(vec,tam);
    return 0;
}

// funcion
void vectorimpar(int vec[],int tam){
   //saco los impares en otro vector
    int vec2[100],j=0;
for(int i=0;i<tam;i++){
        if(vec[i]%2!=0){

            vec2[j]=vec[i];
            j++;
    }
     }

     printf("los numeros impares son:\n");
for(int i=0;i<j;i++){

    printf("%d\n",vec2[i]);

}

}


