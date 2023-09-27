#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>

using namespace std;

vector<int> total;
vector<int> coin;
const int INF = 10000000;
int n, m;

int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		int c;
		scanf("%d", &c);

		coin.push_back(c);
	}

	for (int i = 0; i <= n; i++)
	{
		total.push_back(INF);
	}

	total[0] = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = coin[i]; j <= n; j++)
		{
			total[j] = min(total[j], total[j - coin[i]] + 1);
		}
	}

	printf("%d\n", total[n]);

	return 0;
}