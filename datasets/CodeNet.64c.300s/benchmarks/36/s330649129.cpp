#include<stdio.h>

int main()
{
	int a, b, c;
	int num[] = { 0, 0, 0 };
	int tmp = 0;

	scanf("%d%d%d", &a, &b, &c);

	num[0] = a;
	num[1] = b;
	num[2] = c;

	while (num[0] > num[1] || num[1] > num[2])
	{
		for (int i = 0;i < 2; i++)
		{
			if (num[i] > num[i+1])
			{
				tmp = num[i+1];
				num[i+1] = num[i];
				num[i] = tmp;
			}
		}
	}

	printf("%d %d %d\n", num[0], num[1], num[2]);
	

	return 0;
}