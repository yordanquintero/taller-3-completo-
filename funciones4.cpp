#include <stdio.h>
#include <stdlib.h>
float numero;
float fraccionario(float n);
int main()
{
    printf("igrese un numero ");
    scanf("%f",&numero);
    printf("la  fraccion del numero es: %0.3f ",fraccionario(numero));
    return 0;
}
float fraccionario(float n){

	int entero;
	entero = n;

	float resultado;
	resultado = n - entero;

	return resultado;
}
