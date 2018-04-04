#include <stdlib.h>
#include <stdio.h>
void funpot(int num1, int num2);
long potencia=1;
int num1,num2;
int main()
{
   printf("ingrese un numero: ");
    scanf("%d",&num1);
    printf("ingrese el exponente: ");
    scanf("%d",&num2);
    funpot(num1,num2);
    printf("la potencia es: %d",potencia);

    return 0;
}
void funpot(int num1, int num2){
for (int i=1;i<=num2;i++){

    potencia=potencia*num1;


}

}
