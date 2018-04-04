#include <stdlib.h>
#include <stdio.h>
float vect[]={32.583f,11.239f,45.781f,22.237f};
void array1(float vect[]);
int main(){
    printf("los cuatro elemntos son :\n");
    array1(vect);

    return 0;
}
void array1(float vect[]){

    for(int i=0;i<=3;i++){
        printf("%.3f\n",vect[i]);
    }

}
