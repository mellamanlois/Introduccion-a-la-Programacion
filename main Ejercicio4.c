#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int segundos_totales,horas,minutos,segundos,tmp;
	
	printf("Este es un programa para mostrar la conversion de una cantidad de segundos en sus equivalencias en horas, minutos y segundos\n");
	printf("Porfavor, ingrese la cantidad de segundos proxima a ser convertida en sus equivalencias ");
	scanf("%d",&segundos_totales);

	((segundos_totales/60)<60)?((minutos=segundos_totales/60)&(segundos=segundos_totales%60)&(horas=0)):(horas=(segundos_totales/60)/60);
	(segundos_totales<60)?(segundos=segundos_totales):((minutos=(segundos_totales/60)%60)&(segundos=segundos_totales%60));
  
    printf("%i %i %i\n",horas,minutos,segundos);

	return 0;
}
