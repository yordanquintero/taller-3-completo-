#include <stdlib.h>
#include <stdio.h>
int m[100][100],m2[100][100],f,c;
void matriz(int f,int c,int m[][100]);
void traspuesta(int m[][100]);
int main(){
    printf("ingrese una matriz para crear su traspuesta\n");
    printf("ingrese las filas: ");
    scanf("%d",&f);
    printf("ingrese la cantidad de columnas: ");
    scanf("%d",&c);
    //funciones
    matriz(f,c,m);
    traspuesta(m);
    return 0;
}
void matriz(int f,int c,int m[][100]){
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        printf("ingrese un numero: ");
        scanf("%d",&m[i][j]);
    }
}
}
//crear otra matriz con la traspuesta
void traspuesta(int m[][100]){
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
    m2[i][j]=m[j][i];
    }
}
//imprimir matriz
printf("matriz traspuesta\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        printf("%d ",m2[i][j]);
    }
    printf("\n");
}

}
