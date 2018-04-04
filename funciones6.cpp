#include <stdio.h>
#include <stdlib.h>

int n,m;
void intercambio(int& ,int& );
int main(){
printf("ingrese dos valores para intercambiar\n");
scanf("%d",&n);
scanf("%d",&m);
intercambio(n,m);

return 0;
}
void intercambio(int& n,int& m){
//n cambia a ser m
int cambio=0;
cambio=m;
m=n;
n=cambio;
printf("ahora el primer numero es: %d\n",n);
printf("ahora el segundo numero es: %d\n",m);

}

