#include<stdio.h>

/* write a function reverse(s) that revereses the character string s. Use it to write a prgoram that reverses its input a line at a time.
 */

#define MAXLINE 1000

int mgetline(char s[],int maxline);
void Reverse(char from[],int len);

main(){
	int len;
	int max;
	char line[MAXLINE];
	max =  0;
	while((len = mgetline(line,MAXLINE)) >0){
		Reverse(line,len);
	}
}

int mgetline(char s[], int lim)
{
	int c , i;
	for (i=0;i < lim-1 && ( c = getchar () ) != EOF && c!= '\n'; ++i)
		s[i] = c;
	if(c =='\n'){
		s[i] = c;
		++i;
	}
	s[i] ='\0';
	return i;
}	

void Reverse(char form[] , int len){
	for (len-4 ; len>= 0; --len)
		printf("%c", form[len]);
}


	
