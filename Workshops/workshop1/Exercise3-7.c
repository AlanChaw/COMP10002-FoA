#include <stdio.h>

int main(){
	double value;
	char unit;
	
	double output_value;
	char output_unit;
	
	printf("Enter a quantity: ");
	scanf("%lf%c", &value, &unit);
	
	switch(unit){
		// convert between Fahrenheit and Celsius
		case 'C':
			output_value = value * 1.8 + 32;
			output_unit = 'F';
			printf("The temperature %.1lf%c converts to %.1lf%c \n", 
				value, unit, output_value, output_unit);
			break;
		case 'F':
			output_value = (value - 32) / 1.8;
			output_unit = 'C';
			printf("The temperature %.1lf%c converts to %.1lf%c \n", 
				value, unit, output_value, output_unit);		break;
		// convert between Miles and Kilometers
		case 'M':
			output_value = value * 1.609;
			output_unit = 'K';
			printf("The distance %.1lf miles converts to %.1lf kilometers \n",
				value, output_value);
			break;
		case 'K':
			output_value = value / 1.609;
			output_unit = 'M';
			printf("The distance %.1lf kilometers converts to %.1lf miles \n",
				value, output_value);
			break;
		// convert between Pounds and Kilograms
		case 'P':
			output_value = value * 0.454;
			output_unit = 'G';
			printf("The weight %.1lf pounds converts to %.1lf kilograms \n",
				value, output_value);
			break;
		case 'G':
			output_value = value / 0.454;
			output_unit = 'G';
			printf("The weight %lf kilograms converts to %lf pounds \n",
				value, output_value);
			break;
		default:
			printf("Illegal input unit.\n");
			break;
	}
		
	return 0;
}