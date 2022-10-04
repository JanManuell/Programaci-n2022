/*Ejercicio 3 - 2.2.5 Uso de las variables*/
/*Directivas de procesamiento*/
#include <stdio.h> /*Libreria entradas-salidas*/
/*Declaraciones variables globales*/
//int pin=0;
/*Función principal*/
int main () /*Suma dos numeros*/
{
	/*Declaración variables locales*/
	int num1=4, num2=6, num3; /*numX son enteros*/
	/*Instrucciones*/
	printf("El valor de num1 es %d",num1);
	printf("\nEl valor de num2 es %d",num2);
	num3=num1+num2;
	printf("\nnum1 + num2=%d",num3);//
	return 0;	
}