#include<stdio.h>

/* creating my first histogram */

#define IN 1
#define OUT 0

main()
{
	int c , i , nc ,j,state ;
	int inputValue;
	int results[10] = {0};
	int NumWords[10] = {0};


	printf("Input the amount of values: \n ");
	scanf("%d", &inputValue);
	int hist[inputValue];
	printf("\n");
	for (i = 0; i< inputValue; ++i){
		scanf("%d",&hist[i]);
	}

	for( i = 0; i <10 ; ++i){
		for (j = 0; j < inputValue; j++){
			if(hist[j] == i)
				++results[i];
		}
	}
	printf("\n");
	for(i = 0; i< 10; ++i){
		printf("[%d] : ",i);
		for(j = 0; j<results[i]; ++j)
			printf("*");
		printf("\n");
	}


}	
