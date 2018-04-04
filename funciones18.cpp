#include <stdlib.h>
#include <stdio.h>
#include <ctime>

int filas,columnas;
     int m[100][100];
void pedirmatriz();
void llenar(int m[][100],int,int);
//verificar

//llamando funciones
int main(){
    pedirmatriz();
    llenar(m,filas,columnas);
    return 0;
}
//pedir la matriz
void pedirmatriz(){
    printf("ingrese una matriz\n");
    printf("ingrese el numero de filas: ");
    scanf("%d",&filas);
    printf("ingrese el numero de columnas: ");
    scanf("%d",&columnas);

}
//rellenar la matriz con numeros aleatorios del 0 al 1
void llenar(int m[][100],int,int ){
 srand(time(0));
 for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
                m[i][j]=rand()%2;
        }
    }

//imprimir la matriz
     printf("LA MATRIZ:\n");
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
           printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

