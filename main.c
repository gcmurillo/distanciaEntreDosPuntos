#include <stdio.h>
#include <point.h>
#include <math.h>

int main(){

	Point p1;
	Point p2;

	printf("Calculo de Distancia Euclidiana entre dos puntos\n");

	printf("Ingrese X del punto1: ");
	scanf("%f", &p1.x);
	printf("Ingrese y del punto1: ");
	scanf("%f", &p1.y);
	printf("Ingrese z del punto1: ");
	scanf("%f", &p1.z); 

	printf("\nIngrese X del punto2: ");
	scanf("%f", &p2.x);
	printf("Ingrese y del punto2: ");
	scanf("%f", &p2.y);
	printf("Ingrese z del punto2: ");
	scanf("%f", &p2.z);

	printf("\nPunto1: (%f, %f, %f)\n", p1.x,p1.y, p1.z);
	printf("\nPunto2: (%f, %f, %f)\n", p2.x,p2.y, p2.z);
	
	printf("Distancia entre P1 y P2: %lf \n", calcularDistancia(p1, p2));

}
