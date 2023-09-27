#include<stdio.h>
int main(void) {
	int a, b[1002], d[1002], c[1002], ca1, ca2, ca3, caa;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		scanf("%d %d %d", &ca1, &ca2, &ca3);
		while (1)
		{
			if (ca2>ca1)
			{
				caa = ca1;
				ca1 = ca2;
				ca2 = caa;
			}
			if (ca3>ca2)
			{
				caa = ca2;
				ca2 = ca3;
				ca3 = caa;
			}
			if (ca1 >= ca2&&ca2 >= ca3)break;
		}
		b[i] = ca1; c[i] = ca2; d[i] = ca3;
	}
	for (int i = 1; i <= a; i++)
	{
		if (b[i] * b[i] == (c[i] * c[i]) + (d[i] * d[i]))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}