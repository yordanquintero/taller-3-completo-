#include <stdio.h>
#include <stdlib.h>
int f,c;
int m[100][100],m2[100][100],suma[100][100];
void matriz(int f,int c,int m[][100],int m2[][100]);
void sumamatriz(int m[][100],int m2[][100]);

int main(){
printf("ingrese dos matrices para sumarlas\n");
printf("ingrese la dimension de la matriz\n");
printf("flilas: ");
scanf("%d",&f);
printf("columnas: ");
scanf("%d",&c);
//funciones
matriz(f,c,m,m2);
sumamatriz(m,m2);

	return 0;
}

void matriz(int f,int c,int m[][100],int m2[][100]){
if(f!=c){
    printf("la matriz no se puede sumar por que no es de diemsiones iguales\n");
}else{
    //llenando la matriz 1
    printf("llene la matriz\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        printf("ingrese un numero: ");
       scanf("%d",&m[i][j]);
    }
}
//llenando la segunda matriz
printf("llene la segunda matriz\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        printf("ingrese un numero: ");
       scanf("%d",&m2[i][j]);
    }
}
//impriminedo la matriz 1
printf("MATRIZ 1\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        printf("%d ",m[i][j]);
    }
    printf("\n");
}
//impriminedo la matriz 2
printf("MATRIZ 2\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        printf("%d ",m2[i][j]);
    }
    printf("\n");
}

}
}
void sumamatriz(int m[][100],int m2[][100]){
//suma
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        suma[i][j]=m[i][j]+m2[i][j];
    }

}

printf("la suma de las dos matrices es:\n");
for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
        printf("%d ",suma[i][j]);
    }
    printf("\n");
}

}
