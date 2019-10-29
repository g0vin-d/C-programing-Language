#include<stdio.h>
/* progra to print all input lines that are longer than 80 characters */

#define MAXLINE 1000

int getlinex(char s[], int maxline);

main()
{
	int len,i,j;
	int max;
	char line[MAXLINE];

	max = 80;
	j = 0;

	while((len = getlinex(line,MAXLINE))>0){
		if(len>=max){
			printf("%s", line);
		}
	}
}

/* getline: read line into s, retunn lengths */

int getlinex(char s[], int maxline)
{
	int c , i;
	
	for (i =0; i<maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

