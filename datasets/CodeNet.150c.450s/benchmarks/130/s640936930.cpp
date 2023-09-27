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
	int a[100][100];
	int b[100];
	int ans[100];
	int n, m;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)
	{
		scanf("%d", &a[i][j]);
	}

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < n; i++)
	{
		ans[i] = 0;
		for (int j = 0; j < m; j++)
		{
			ans[i] += a[i][j] * b[j];
		}
		printf("%d\n", ans[i]);
	}

	return 0;
}