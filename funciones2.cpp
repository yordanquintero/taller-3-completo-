#include <stdlib.h>
#include <stdio.h>

void al_cuadrado(float num);
float num;
float resultado;



int main(){
    printf("ingrese un numero para ver el cuadrado ");
    scanf("%f",&num);
    //funcion
    al_cuadrado( num);
    printf("el cuadrado es %f",resultado);
    return 0;
}



void al_cuadrado(float num){
resultado=num*num;
}
