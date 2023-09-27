#include<stdio.h>

int main(void)
{
	int i, len;
	char str[21], rev[21];

	scanf("%s", str );

	for( i = 0; str[i] != '\0'; i++ ){}

	len = i - 1;

	for( i = 0; len >= 0; i++, len-- ){
		rev[i] = str[len];
	}

	rev[i] = '\0';

	printf("%s\n",rev );

	return 0;
}