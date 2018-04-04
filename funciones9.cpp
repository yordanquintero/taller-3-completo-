#include <stdlib.h>
#include <stdio.h>


void calc_anos(int,int&,int&,int&);

int main(){
    int totaldias,anos,mes,dia;
    printf("ingrese el numero de dias trascurridos ");
    scanf("%d",&totaldias);
     calc_anos(totaldias,anos,mes,dia);
     printf("la fecha despues de trascurrir los dias es: %d",dia+1);
     printf("/%d",mes+1);
     printf("/%d",anos+2000);
    return 0;
}
void calc_anos(int totaldias,int& anos,int& mes,int& dia){

anos = totaldias/365;
totaldias=totaldias % 365;
	mes = totaldias/30;
	dia = totaldias%30;

}
