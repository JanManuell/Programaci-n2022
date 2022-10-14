/*Ejercicio - Instrucciones de escritura y lectura*/
/*Directivas de procesamiento*/
#include <stdio.h> /*Libreria entradas-salidas*/
/*Declaraciones variables globales*/
//int pin=0;

int main () /*Función principal*/
{
	/*Declaración variables locales*/
	/*Declaración de una variable local tipo entero con el valor asignado de 5*/
	int var=5; /*var es entero*/
	/*Declaración de tres variables locales tipo real*/
	float var1, var2, var3;/*varx son reales*/
	
	/*Instrucciones*/
	printf("La actividad debe ser a completada:\n"); /*Instrucción de escritura con salto de linea*/
	printf("%d \n",var); /*Instrucción de escritura del valor de la variable local tipo entero con salto de linea*/
	
	scanf("%f",&var1); /*Instrucción de lectura para la primer variable local tipo real*/
	scanf("%f %f", &var2, &var3); /*Instrucción de lectura para la 2da y 3ra variable local tipo real*/
	
	printf("%d %f %f %f", var, var1, var2, var3); /*Instrucción de escritura del valor de las cuatro variables locales*/
	//printf("Hola programadores 2022");
	//printf("\n%f %u %f %u",x,y,z,m);//Mostrar variables - especificaciones (%d)
	//printf("\n \"Clase de programacion\"");//
	//return 0;	
}