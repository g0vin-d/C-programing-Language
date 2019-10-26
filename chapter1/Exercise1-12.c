#include<stdio.h>
/* program that prints its input one word per line */

#define IN 1
#define OUT 0

main() 
{
	int c , nw , state;
	
	nw = 0;
	state = OUT;
	while (( c = getchar())!= EOF ){
		if( c == ' ' ){
			state = OUT;
			putchar('\n');
			continue;
		}
		else if ( state == OUT ) {
			state = IN;
			++nw;
		}
		putchar(c);
	}
	printf("%d \n ", nw);
}
