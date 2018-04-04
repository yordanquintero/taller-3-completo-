#include <stdlib.h>
#include <stdio.h>


struct Fecha{
    int dia,mes,anio;
}fecha1,fecha2;



//Prototipos de Funciones
void pedirDatos();
Fecha mayor(Fecha,Fecha);
void mostrarFechaMayor(Fecha);

int main(){
	pedirDatos();
	Fecha x = mayor(fecha1,fecha2);
	mostrarFechaMayor(x);


	return 0;
}

void pedirDatos(){
	printf("Digite la Fecha1: ");
	printf("Dia: ");
	scanf("%d",&fecha1.dia);
	printf("Mes: ");
	scanf("%d",&fecha1.mes);
	printf("Anio: ");
	scanf("%d",&fecha1.anio);

	printf("Digite la Fecha1: ");
	printf("Dia: ");
	scanf("%d",&fecha2.dia);
	printf("Mes: ");
	scanf("%d",&fecha2.mes);
	printf("Anio: ");
	scanf("%d",&fecha2.anio);

}

Fecha mayor(Fecha f1,Fecha f2){
	Fecha mayorFecha;

	//Primero comprobar los años
	if(fecha1.anio == fecha2.anio){
		//Ahora, comprobar los meses
		if(fecha1.mes ==fecha2.mes){
			//Por ultimo comprobar los dias
			if(fecha1.dia == fecha2.dia){
				printf("\nambas fechas son iguales");
			}
			else if(fecha1.dia > fecha2.dia){
				mayorFecha = fecha1;
			}
			else{
				mayorFecha = fecha2;
			}
		}
		else if(fecha1.mes > fecha2.mes){
			mayorFecha = fecha1;
		}
		else{
			mayorFecha = fecha2;
		}
	}
	else if(fecha1.anio > fecha2.anio){
		mayorFecha = fecha1;
	}
	else{
		mayorFecha = fecha2;
	}


	return mayorFecha;
}

void mostrarFechaMayor(Fecha mayor){
	printf(("\nMostrando fecha mayor:%d/%d/%d"),mayor.dia,mayor.mes,mayor.anio);

}

