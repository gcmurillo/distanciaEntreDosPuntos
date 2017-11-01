#include <point.h>
#include <math.h>

float calcularDistancia(Point p1, Point p2){

	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2) + pow((p1.z - p2.z), 2)); 

}
