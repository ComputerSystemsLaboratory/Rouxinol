#include <stdio.h>
#include <string.h>

int main()
{
	char s[22];
	scanf("%s",s);
	for(int i = 0; i < strlen(s); i++)
	{
		printf("%c",s[strlen(s) - i - 1]);
	}
	printf("\n");
	return 0;
}