#include <stdlib.h>
#include <stdio.h>
#include <ctime>
int m[3][3],f=0,c=0,L=3;
bool esprimo(int);
void insertarnumMatriz(int);

int main(){
    //creando los nuemeros aleatorios
    srand(time(0));
    int n;
    while(f!=L){
        n=rand()%30;
        if(esprimo(n)){
            insertarnumMatriz(n);
        }
    }
    //imprimiendo la matriz
printf("MATRIZ DE NUMEROS PRIMOS ALEATORIOS\n");
for(int i=0;i<L;i++){
    for(int j=0;j<L;j++){
        printf("%d ",m[i][j]);
    }
    printf("\n");
}
    return 0;
}
//mirando si el numero generado es primo
bool esprimo(int n){
int i,primos=0;
for(i=1;i<=n;i++){
    if(n%i==0){
        primos++;
    }
}
if(primos==2){
    return true;
}else{
    return false;
}

}
//insertando los numeros primos en la matriz
void insertarnumMatriz(int n){
m[f][c]=n;
c++;
if(c==L){
    f++;
    c=0;
}
}
