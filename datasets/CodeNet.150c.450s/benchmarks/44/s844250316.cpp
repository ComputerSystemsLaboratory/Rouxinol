#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a[4];
	int b[4];
	while(scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]) != EOF)
	{
		int num1 = 0;
		int num2 = 0;
		for(int i=0; i<4; i++)
		{
			scanf("%d", &b[i]);
			if(b[i] == a[i])
				num1++;
		}
		for(int i=0; i<4; i++)
		for(int j=0; j<4; j++)
		{
			if(a[i] == b[j])
				num2++;
		}
		printf("%d %d\n", num1, num2 - num1);
	}
	return 0;
}