#include <stdio.h>
#include <conio.h> 
#define PI 3.141

int main(){
	float l,b,r,area_rectangle,perimeter_rectangle,area_circle,circumference_circle;
	
	printf("Enter the length and  breadth of the rectangle and the radius of the circle : ");
	scanf("%f%f%f", &l,&b,&r);
	
	area_rectangle  = l*b;
	perimeter_rectangle = 2*(l+b);
	
	area_circle = PI*(r*r);
	circumference_circle  = 2*PI*r;
	
	printf("\nArea and Perimeter of rectangle : %f\n%f", area_rectangle, perimeter_rectangle);
	printf("\nArea and Circumfrence of circle : %f\n%f", area_circle, circumference_circle);
	
	return 0;
}
