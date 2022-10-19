#include <stdio.h> //directivas de procesamiento
//#include <stdlib.h>

int main() //Funcion principal
{
	int numerocoches[4]; //Arreglo tipo entero con 4 elementos
	numerocoches[0]=32; //Valor del indice 0 (arreglo)
	numerocoches[1]=90;//Elemento 2 del arreglo
	numerocoches[2]=6;
	numerocoches[3]=100;
	printf("El numero de coches en la hora cero fue %d \n",numerocoches[0]);/*Impresion del indice 0*/
	printf("El numero de coches en la hora uno fue %d \n",numerocoches[1]);/*Impresion del indice 1*/
	printf("El numero de coches en la hora dos fue %d \n",numerocoches[2]);/*Impresion del indice 2*/
	printf("El numero de coches en la hora tres fue %d \n",numerocoches[3]);/*Impresion del indice 3*/
	return 0;
}