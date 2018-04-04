#include <stdlib.h>
#include <stdio.h>
#include <ctime>
int m[100][100],limite;
void llenar (int m[][100],int limite);

int main(){
printf("ingrese el tope de numeros para llenar la matriz automatica: ");
scanf("%d",&limite);
//funcion
llenar(m,limite);

    return 0;
}
//funcion para llenar automatica
void llenar (int m[][100],int limite){
    srand(time(0));
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        m[i][j]=rand()%limite+1;
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",m[i][j]);
    }printf("\n");
}
}
