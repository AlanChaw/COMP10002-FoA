#include <stdio.h>

int main(){
	double fah;
	printf("Please input the Fahrenheit value: ");
	scanf("%lf", &fah);
	
	double cel = (fah - 32) * 5 / 9;
	
	printf("The Celsius is %lf\n", cel);

	return 0;	
}

/*
	while (1){
		printf("Please input the Fahrenheit value: ");
		scanf("%lf", &fah);
		
		double cel = (fah - 32) * 5 / 9;
		
		printf("The Celsius is %lf\n", cel);
}
*/