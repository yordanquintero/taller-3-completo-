#include <stdlib.h>
#include <stdio.h>
int filas,columnas;
     int m[100][100];
void pedirmatriz();
void simetrica(int m[][100],int filas,int columnas);

//funciones
int main(){
pedirmatriz();
simetrica(m, filas, columnas);
    return 0;
}
//pedir los datos
void pedirmatriz(){
    printf("ingrese una matriz\n");
    printf("ingrese el numero de filas: ");
    scanf("%d",&filas);
    printf("ingrese el numero de columnas: ");
    scanf("%d",&columnas);
//rellenar la matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
           scanf("%d",&m[i][j]);
        }
    }
    //imprimir matruz
    printf("la matriz:\n");
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
           printf("%d",m[i][j]);
        }
        printf("\n");
    }


}
//comprobar si es simetrica
void simetrica(int m[][100],int filas,int columnas){
    char band='F';
         if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(m[i][j] == m[j][i]){
					band='V';
				}
			}
		}
	}

if(band=='V'){
    printf(".es simetrica.");

}else{
printf(".no es simetrica.");
}
}



