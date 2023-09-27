#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[21] = "\0";
	int X;

	scanf("%s", str);

	for (X = strlen(str)-1; X > 0; X--)
	{
		if (X <= (strlen(str) - 1) - X)
			break; 

		str[(strlen(str)-1) - X] ^= str[X];
		str[X] ^= str[(strlen(str)-1) - X];
		str[(strlen(str)-1) - X] ^= str[X];
	}
	printf("%s\n", str);

	return 0;
}