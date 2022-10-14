#include <stdio.h>
int main()
{
	int segundos, minutos, horas;
	int dias, semanas;
	printf("Introduzca segundos");
	scanf("%d",&segundos);
	minutos= segundos/60;
	horas= minutos/60;
	dias=horas/24;
	semanas=dias/7;
	printf("Numero de segundos %d\n",segundos);
	printf("Numero de minutos %d\n",minutos);
	printf("Numero de horas %d\n",horas);
	printf("Numero de dias %d\n",dias);
	printf("Numero de semanas %d\n",semanas);
	return 0;
}