#include<stdio.h>

int rest(int);

int main()
{
	int n;
	scanf("%d", &n);
	int i;
	for (i = 1; i <= n - 1; i++)
	{
		if (i % 3 == 0 || i % 10 == 3|| rest(i) == 1) printf(" %d", i);
	}
	if (i % 3 == 0 || i % 10 == 3 || rest(i) == 1) printf(" %d\n", i);
	else printf("\n");
	
	return 0;
}

int rest(int x)
{
	int j;
	while (x > 0)
	{
		x /= 10;
		if (x % 10 == 3) return 1;
	}
	return 0;

}