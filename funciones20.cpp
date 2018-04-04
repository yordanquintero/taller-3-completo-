#include <stdlib.h>
#include <stdio.h>
void contarvocal();
char palabra[40];
int main(){
    printf("ingrese su nombre: ");
    gets(palabra);
    contarvocal();
return 0;
}void contarvocal(){
    int numero=0;
for(int i=0;i<40;i++){
    switch(palabra[i]){
    case 'a':numero=numero+1;
    break;
    case 'e':numero=numero+1;
    break;
     case 'i':numero=numero+1;
    break;
     case 'o':numero=numero+1;
    break;
     case 'u':numero=numero+1;
    break;

    }
}
printf("el numero de vocales que tiene la palabra es: %d",numero);


}
