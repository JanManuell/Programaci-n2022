/*Sistema de ecuaciones lineales*/
/*ax + by = c; dx + ey = f --> se puede resolver con las siguientes fórmulas :*/
/*x=(ce – bf)/(ae – bd); y=(af – cd)/(ae – bd)*/
/*Diseñar un programa que lea dos conjuntos de coeficientes (a, b, c, d, e, f) y visualice los valores de x e y.*/
/*Codificación*/
#include <stdio.h>
int main()
{
	float a, b, c, d, e, f, x, y, denominador;
	puts("Introduce el valor de a,b y c");
	scanf("%f %f %f", &a, &b, &c);
	puts("Introduce el valor de d,e y f");
	scanf("%f %f %f", &d, &e,&f);
	denominador=a*e-b*d;
	if(denominador==0)
		printf("No solución\n");	
	else
	{
		x=(c*e-b*f)/denominador;
		y=(a*f-c*d)/denominador;
		printf("la solucion es\n");
		printf("%f %f \n", x,y);
	}
	return 0;
	
}