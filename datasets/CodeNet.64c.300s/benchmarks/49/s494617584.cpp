#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>



int main()
{
	int a, b;
	char total[16];
	while (scanf("%d %d", &a, &b) != EOF)
	{
		sprintf(total, "%d", a + b);
		printf("%d\n", strlen(total));
	}
	return 0;
}