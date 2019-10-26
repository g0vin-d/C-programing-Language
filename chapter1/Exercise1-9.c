#include<stdio.h>
/* copy its input to its output replacing space , tab and blank with its values */

main(){
	int c ;
	while((c = getchar()) != EOF ){
		if ( c == '\t'){
			putchar('\\');
			putchar('t');
			continue;
		}
		if ( c == ' '){
			putchar('\\');
			putchar('\\');
			continue;
		}
		putchar(c);
	}
}
