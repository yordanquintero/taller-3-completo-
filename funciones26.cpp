#include <stdlib.h>
#include <stdio.h>
int v[100],v2[100];
int m[100][100];
void llenar(int m[][100]);
void suma(int m[][100],int v[],int v2[]);

int main(){
    //funciones
    printf("llene la matriz de 3x3\n\n");
    llenar(m);
    suma(m,v,v2);
    return 0;

}
//funcion de llenar
void llenar(int m[][100]){
      //llenado la matriz
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            printf("ingrese un numero: ");
        scanf("%d",&m[i][j]);
    }
}
//impriminedo la matriz
printf("\n");
printf("LA MATRIZ:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",m[i][j]);
    }
    printf("\n");
}
}
void suma (int m[][100],int v[],int v2[]){
//sumamos las filas
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        v[i]=v[i]+m[i][j];
    }
}
//sumamos las columnas
for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
        v2[i]=v2[i]+m[j][i];
    }
}
//imprimir la suma de las filas
printf("\n");
printf("SUMA DE FILAS:\n");
for(int i=0;i<3;i++){
        printf("fila %d = %d",i+1,v[i]);
        printf("\n");

}
//imprimir la suma de las columnas
printf("\n");
printf("SUMA DE COLUMNAS:\n");
for(int i=0;i<3;i++){

        printf("|columna %d = %d| ",i+1,v2[i]);
}
printf("\n");
}
