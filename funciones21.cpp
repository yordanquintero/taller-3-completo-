#include <stdlib.h>
#include <stdio.h>
void contar();
char cadena[50];
int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
//funciones
int main(){
    printf("ingrese una cadena de caracteres: ");
    gets(cadena);
    contar();
     return 0;
}
//funcion
void contar(){
 for(int i=0;i<50;i++){
        switch(cadena[i]){
            case 'a':vocal_a=vocal_a+1;
            break;
            case 'e':vocal_e=vocal_e+1;
            break;
            case 'i':vocal_i=vocal_i+1;
            break;
            case 'o':vocal_o=vocal_o+1;
            break;
            case 'u':vocal_u=vocal_u+1;
            break;
        }
    }
        printf("\n");
        printf("veces que se repiten las vocales:\n");
        printf("A:%d\n",vocal_a);
        printf("E:%d\n",vocal_e);
        printf("I:%d\n",vocal_i);
        printf("O:%d\n",vocal_o);
        printf("U:%d\n",vocal_u);
}
