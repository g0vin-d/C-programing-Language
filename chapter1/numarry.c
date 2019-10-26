#include<stdio.h>
/*  to check how arry and ascii works  */

main()
{
	int c , i ;
	int ndigit[10];
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	for ( i = 0; i< 10; ++i)
		printf(" %d ", ndigit[i]);
	c = '4';
	printf("\n %d ", '0');
	printf("\n %d \n ",c-'0');
	 ++ndigit[c-'0'];
	 ++ndigit[c-'0'];
	 ++ndigit[2];
	 ++ndigit[2];
	 ++ndigit[9];
	 while((c = getchar()) != EOF){
		 if(c >='0' && c <= '9')
			 ++ndigit[c-'0'];
	 }
	for(i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);

}


