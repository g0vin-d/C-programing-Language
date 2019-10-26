#include<stdio.h>
/* simple getchar program to understand its use */

main() 
{
	int c;
	while((c = getchar()) != EOF)
		putchar(c);

}
