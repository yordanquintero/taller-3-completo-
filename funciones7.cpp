#include <stdlib.h>
#include <stdio.h>


void cambio(int,int&,int&,int&,int&,int&,int&);
int main(){
    int numero,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;

     printf("ingrese el valor de dolares: ");
    scanf("%d",&numero);
    //llamo la funcion
    cambio(numero,cien,cincuenta,veinte,diez,cinco,uno);
    return 0;
}
//funcion cambio
void cambio(int numero,int& cien,int& cincuenta,int& veinte, int& diez, int& cinco,int& uno){
// operaciones para el cambio
    cien= numero/100;
	numero %= 100;
	cincuenta = numero/50;
	numero %= 50;
	veinte= numero/20;
	numero %= 20;
	diez = numero/10;
	numero %= 10;
	cinco = numero/5;
	uno = numero%5;

	//muestro el cambio
    printf("billetes a entregar como cambio\n");
    printf("cien:%d\n",cien);
    printf("cincuenta:%d\n",cincuenta);
    printf("veinte:%d\n",veinte);
    printf("diez:%d\n",diez);
    printf("cinco:%d\n",cinco);
    printf("uno:%d\n",uno);

}
