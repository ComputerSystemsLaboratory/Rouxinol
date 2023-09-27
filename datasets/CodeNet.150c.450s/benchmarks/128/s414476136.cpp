#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	scanf("%s", str);
	int i;
	for (i = strlen(str)-1; i >= 0; --i)
	{
		putchar(str[i]);
	}
	printf("\n");
	return 0;
}