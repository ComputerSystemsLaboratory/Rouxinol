#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>

using namespace std;

#define MAXN 1000016

int isprime[MAXN];

void sieve(int n)
{
	int i, j, num, p = 0;
	fill(isprime, isprime + MAXN + 1, 1);
	for (i = 2, num = 1; i <= n; i++)
	{
		if (isprime[i])
		{
			isprime[i] = num++;
			for (j = 2 * i; j <= n; j += i)
				isprime[j] = 0;
		}
	}
}

int main()
{
	int n;
	sieve(MAXN);
	while (scanf("%d", &n) != EOF)
	{
		if (n == 1)
		{
			printf("0\n");
			continue;
		}
		while (!isprime[n])
		{
			n--;
		}
		printf("%d\n", isprime[n]);
	}
	return 0;
}