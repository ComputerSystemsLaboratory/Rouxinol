#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define int long long

int N;

signed main()
{
	while (cin >> N, N)
	{
		int ans = 0;
		for (int i = 1; i < N; i++)
		{
			int sum = i;
			for (int j = i + 1; j <= N; j++)
			{
				sum += j;
				if (sum >= N)
				{
					if (sum == N) ans++;
					break;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}