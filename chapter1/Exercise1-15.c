#include<stdio.h>
/* use a function for temperature conversion */

float tempConv(int fahr );
#define LOWER 0
#define UPPER 300
#define STEP 20
main(){
	int i;
	for (i = LOWER; i <= UPPER; i = i + STEP)
		printf("%3d %6.1f\n", i, tempConv(i));
}

float tempConv(int fahr){
	float c;
	c = (5.0/9.0) * (fahr - 32.0);
	return c;
}

