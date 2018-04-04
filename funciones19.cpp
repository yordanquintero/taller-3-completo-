#include <stdlib.h>
#include <stdio.h>
int num1,num2,num3,num4;
int v[100][100];
void llenar(int num1,int num2,int num3,int num4);
void imprimir();



int main(){
    //pedimos los datos
    printf("ingrese 4 numeros\n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    //llamamos las funciones
    llenar(num1,num2,num3,num4);
    imprimir();

    return 0;
}



//funcione para llenar la matriz
void llenar(int num1,int num2,int num3,int num4){
  for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if (i==0&&j==0){
                v[i][j]=num1;
            }
            if (i==1&&j==0){
                v[i][j]=num2;
            }
            if(i==2&&j==0){
                v[i][j]=num3;
            }
            if(i==3&&j==0){
                v[i][j]=num4;
            }
            if(i==0&&j==1){
                v[i][j]=num1*num1;
            }
            if(i==1&&j==1){
                v[i][j]=num2*num2;
            }
            if(i==2&&j==1){
                v[i][j]=num3*num3;
            }
            if(i==3&&j==1){
                v[i][j]=num4*num4;
            }
            if(i==0&&j==2){
                v[i][j]=num1*num1*num1;
            }
            if(i==1&&j==2){
                v[i][j]=num2*num2*num2;
            }
            if(i==2&&j==2){
                v[i][j]=num3*num3*num3;
            }
            if(i==3&&j==2){
                v[i][j]=num4*num4*num4;
            }
            if(i==0&&j==3){
                v[i][j]=num1*num1*num1*num1;
            }
            if(i==1&&j==3){
                v[i][j]=num2*num2*num2*num2;
            }
            if(i==2&&j==3){
                v[i][j]=num3*num3*num3*num3;
            }
            if(i==3&&j==3){
                v[i][j]=num4*num4*num4*num4;
            }
        }
}
}
//funcion para imprimir la matriz
void imprimir(){
   printf("MATRIZ\n");
 for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
                printf("%d ",v[i][j]);
        }
        printf("\n");
    }

}
