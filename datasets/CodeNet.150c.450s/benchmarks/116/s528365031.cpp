#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int num[1000000];
int main()
{
	int n, k, ans = 0, anss = 0;
	while (1)
	{
		scanf("%d%d", &n, &k);
		if (n == 0 && k == 0)
			break;
		num[0] = 0;
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &num[i]);
			num[i] = num[i] + num[i - 1];
		}
		for (int i = k; i <=n; i++)
		{
			anss = num[i] - num[i - k];
			if (ans < anss)
				ans = anss;
		}
		printf("%d\n", ans);
	}
	return 0;
}