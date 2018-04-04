#include <stdlib.h>
#include <stdio.h>
int m[100][100],filas,columnas;
void pedir ();
int menorr(int m[][100],int,int);

int main(){
pedir();
printf("el menor de la fila es: %d",menorr(m,filas,columnas));
    return 0;

}


void pedir(){
printf("ingrese una matriz\n");
    printf("ingrese el numero de filas: ");
    scanf("%d",&filas);
    printf("ingrese el numero de columnas: ");
    scanf("%d",&columnas);
    //rellenar la matriz
    for(int i=1;i<=filas;i++){
        for(int j=1;j<=columnas;j++){
           scanf("%d",&m[i][j]);
        }
    }
    printf("MATRIZ:\n");
    for(int i=1;i<=filas;i++){
        for(int j=1;j<=columnas;j++){
           printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}


int menorr(int m[][100],int filas,int columnas){
int fila,menor=99999;
printf("digite el numero de fila a comprobar: ");
scanf("%d",&fila);
for(int i=1;i<=filas;i++){
		for(int j=1;j<=columnas;j++){
			if(i==fila){
              if(m[i][j]<menor){
                menor=m[i][j];
              }
			}
		}
	}

	return menor;
}


