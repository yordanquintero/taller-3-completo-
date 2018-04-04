#include <stdlib.h>
#include <stdio.h>
void pares (int vec[]);
int vec[10],r[10];
int k=0;
//funciones
int main(){
    printf("ingrese 10 numeros:\n");
     for (int i=0;i<10;i++){
            printf("%d:",i+1);
        scanf("%d",&vec[i]);
    }
    pares(vec);
    return 0;
}
//funcion
void pares (int vec[]){

    printf("son pares:\n");
    for (int i=0;i<10;i++){
        if(vec[i]%2==0){
          printf("%d\n",vec[i]);

        }
    }
}
