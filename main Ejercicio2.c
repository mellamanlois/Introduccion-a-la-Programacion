#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float pies,pulgadas,yardas,cm,m;
	
	printf("Este programa sirve para convertir un cierto numero de pies en pulgadas, yardas, centimetros y metros\n");
	printf("Porfavor, ingrese la cantidad de pies que quiere convertir ");
	scanf("%f",&pies);
	
	pulgadas=pies*12;
	yardas=pies/3;
	cm=pulgadas*2.54;
	m=cm/100;
	
	printf("La contidad de pies en las diferentes unidades es: \n%f pulgadas\n%f yardas\n%fcentimetros\n%f metros.",pulgadas,yardas,cm,m);
	
	return 0;
}
