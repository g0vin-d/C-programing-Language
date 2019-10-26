#include<stdio.h>
/* program to pring a histogram of the frequencies of different characters in its input */


main()
{
	int c , i , j;
	int character[26] = {0};
	while(( c = getchar() ) != EOF ) {
		if(c >= 'a' && c <= 'z')
			++character[c - 'a'];
	}
	for (i = 0; i < 26; ++i){
		printf("[%c] : ", i+97);
		for (j = 0; j< character[i] ; ++j)
			printf("* ");
		printf("\n");
	}
}
