
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

const int MAX_N = 999999;
int prime[MAX_N];
bool is_prime[MAX_N + 1];

int sieve(int n)
{
	int p = 0;
	for (int i = 0; i <= n; i++)
		is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;

	for (int i = 2; i <= n; i++)
	{
		if (is_prime[i])
		{
			prime[p++] = i;
			for (int j = i * 2; j <= n; j += i)
				is_prime[j] = false;
		}
	}
		return p;
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int ans = sieve(n);
		printf("%d\n", ans);
	}
	return 0;
}