#include <stdio.h>

int main(){
	float F, C;
	
	printf("Enter the tempertaure : ");
	scanf("%f", &F);
	
	C =  ((5/9) * (F - 32));
	
	printf("The temperature in celsius is: %f", C);
	
	return 0;
}
