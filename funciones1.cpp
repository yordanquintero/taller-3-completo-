#include <stdlib.h>
#include <stdio.h>
void mult(float n,float m);
float num1,num2;


int main(){
printf("ingrese dos numeros flotantes:\n");
scanf("%f %f",&num1,&num2);
mult(num1,num2);
return 0;
}


void mult(float n,float m){
    float resultado=n*m;
    printf("la multiplicacion es: %f",resultado);
}
