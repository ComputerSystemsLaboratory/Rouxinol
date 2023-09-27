#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#define _USE_MATH_DEFINES

#include<math.h>
#include<unordered_map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	int n, m, l;
	long long int a[100][100], b[100][100];

	scanf("%d %d %d", &n, &m, &l);

	for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)
	{
		scanf("%lld", &a[i][j]);
	}

	for (int i = 0; i < m; i++)for (int j = 0; j < l; j++)
	{
		scanf("%lld", &b[i][j]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			long long int ans = 0;
			for (int k = 0; k < m; k++)
			{
				ans += a[i][k] * b[k][j];
			}
			printf("%lld", ans);
			if (j < (l - 1))
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}