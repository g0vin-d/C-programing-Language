#include<stdio.h>
#define MAXLINE 1000

/* program to remove trailing blanks and tabs from each line of input, and to delete entirely blank llines */

int getlinex(char line[] , int maxline);
void copy (char to [], char from[]);

main()
{
	int c,i;
	char line[MAXLINE];
	i = 0;
	while(( c = getchar())!= EOF){
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	for(i = 0; line[i] != '\0'; ++i){
		if (line[i]== ' ' && (line[i+1]==' ' || line[i+1] =='\n'))
			continue;
		printf("%c",line[i]);
	}
}

	

