#include<stdio.h>

int main()
{
	while (1)
	{
		char num[1001];
		scanf("%s", num);
		if (num[0] == '0') break;
		int n, sum = 0;
		for (n = 0; num[n] != '\0'; n++)
		{
			sum += num[n] - '0';
		}
		printf("%d\n", sum);
	}

	return 0;
}