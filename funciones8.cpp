#include <stdlib.h>
#include <stdio.h>


void tiempo(int totalseg,int& hora,int& minu,int& seg);
int main(){
    int totalseg,hora,minu,seg;
    printf("ingrese los segundos: ");
    scanf("%d",&totalseg);
    tiempo( totalseg,hora,minu,seg);
    printf("el tiempo equivalente a la cantidad de segundos digitados es:\n");
    printf("hora: %d\n",hora);
    printf("minuto: %d\n",minu);
    printf("segundo: %d\n",seg);
    return 0;
}
void tiempo(int totalseg,int& hora,int& minu,int& seg){
hora=totalseg/3600;
totalseg=totalseg%3600;
minu=totalseg/60;
seg=totalseg%60;

}
