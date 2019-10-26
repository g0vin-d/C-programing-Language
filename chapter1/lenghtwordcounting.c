#include<stdio.h>

/* length of word counting */

#define IN 1
#define OUT 0

main()
{
	int c ,len, nw, nc , state, i,j;
	int wordrange[50] = {0};
	state = OUT;
	len = nw = nc = 0;
	while (( c = getchar()) != EOF){
		++nc;
		if (( c >= 'A' && c <= 'Z' )|| ( c >= 'a' && c<= 'z'))
			++len;
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			wordrange[nw] = len;
			len = 0;
		}
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
/*	for(i = 0; i< 10 ; ++i)
		printf(" %d ", wordrange[i]);*/

	for(i = 1; i < nw ; ++i){
		printf("[%d]  : ",i);
		for( j =  0 ; j < wordrange[i] ; ++j)
			printf("* ");
		printf("\n");
	}

}

