#include<stdio.h>
main() 
{
	float fahr, celsius,X;
	int lower, upper , step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("----Fahr To Celsius Conversion----\n");
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr - 32.0);
		X = (celsius * 9.0/5.0) + 32.0;
		printf("%3.0f %6.1f %4.0f \n", fahr, celsius,X);
		fahr = fahr + step;
	}
}
