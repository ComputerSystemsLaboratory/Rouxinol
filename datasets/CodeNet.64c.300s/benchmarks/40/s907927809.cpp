#include <stdio.h>

#define MAX 26

int main(void)
{
	char c;
	while ((c=getchar()) != '\n') {
		if ((c>='A') && (c<='Z')) {
			c += ' ';
		}
		else if ((c>='a') && (c<='z')) {
			c -= ' ';
		}
		else {
			;
		}
		printf("%c",c);
	}
	printf("\n");
	return 0;
}


