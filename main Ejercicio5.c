#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
    float grados;
    
	printf("Por favor ingrese el n�mero de grados y el tipo de grados que son, ingrese 'f' si son grados Farenheit o 'c' si son grados Celcius; ejemplo: 25f son 25 grados Farenheit\n");
    scanf("%f %c",&grados,&letra);
    (letra=='c')?printf("La conversion es: %.2f grados Farenheit\n",(((9*grados)/5)+32)):((letra=='f')?printf("La conversion es: %.2f grados Celsius\n",(5*(grados-32))/9):printf("Por favor ingrese un tipo de grados que sea valido\n"));
  	
	return 0;
}
