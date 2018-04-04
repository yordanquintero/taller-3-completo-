#include <stdio.h>
#include <stdlib.h>

void maximo(int&,int&,int&);
int num1,num2,num3;


int main(){
    printf("ingrese 3 valores:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
     maximo(num1,num2,num3);
    return 0;
}

//funcion
void maximo(int& num1,int& num2,int& num3){
if (num1>num2&&num1>num3){

    printf("el mayor de los tres  es:%d",num1);

}if (num2>num1&&num2>num3){
printf("el mayor de los tres es:%d",num2);

}else{
printf("el mayor de los tres es: %d",num3);
}
}
