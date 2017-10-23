#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x,y,a,b,res;
	
	printf("Este es un programa para calcular (x+y)^2(a-b)\n");
	printf("Porfavor, introduzca el valor de x ");
	scanf ("%f",&x);
	printf("Ahora, porfavor ingrese el valor de y ");
	scanf("%f",&y);
	printf("Indtroduzca el valor de a ");
	scanf("%f",&a);
	printf("Indtroduzca el valor de b ");
	scanf("%f",&b);
	
	res=((x+y)*(x+y))*(a-b);
	
	printf("El resultado de la ecuacion (x+y)^2(a-b) es: %f",res);
	
	getch(0);
}
