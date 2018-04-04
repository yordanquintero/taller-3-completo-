#include <stdlib.h>
#include <stdio.h>
int cambio;
int tam,vec[100];
void orden ();
//funciones
int main(){
    //llena el arreglo
printf("ingrese el tamaño de arreglo: ");
scanf("%d",&tam);
printf("llene el vector\n");
for(int i=0;i<tam;i++){
printf("%d: ",i+1);
scanf("%d",&vec[i]);
}
    orden();
    return 0;
}
void orden (){
//metodo de ordenamiento burbuja
for(int i=0;i<tam;i++){
   for(int j=0;j<tam;j++){
        if(vec[j]>vec[j+1]){
            cambio=vec[j];
            vec[j]=vec[j+1];
            vec[j+1]=cambio;
        }
   }
}
//imprimir en orden
printf("orden acendente:\n" );
for(int i=1;i<=tam;i++){
        printf("%d: ",i);
    printf("%d\n",vec[i]);
}
}
