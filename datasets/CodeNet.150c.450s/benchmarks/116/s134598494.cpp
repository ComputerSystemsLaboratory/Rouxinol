#include<cstdio>
#include<iostream>
using namespace std;
int num[1000000];
int main()
{
	int n, k, ans = 0, sans=0;
	while (1)
	{
		scanf("%d%d", &n, &k);
		if (n == 0 && k == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &num[i]);
		}
		for (int i = 0; i < n - k; i++)
		{
			for (int j = i; j < i + k; j++)
			{
				sans += num[j];
			}
			if (ans < sans)
				ans = sans;
			sans = 0;
		}
		printf("%d\n", ans);
	}
	return 0;
}