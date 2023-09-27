#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define int long long

int N;

signed main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int Y, M, D;
		cin >> Y >> M >> D;
		int ans = 0;
		for (int y = 1; y <= Y; y++)
		{
			if (y != Y)
			{
				if (y % 3) ans += (19 + 20) * 5;
				else ans += 20 * 10;
				continue;
			}
			for (int m = 1; m <= M; m++)
			{
				if (m == M)
				{
					ans += D - 1;
					break;
				}
				if (y % 3) ans += (m & 1) ? 20 : 19;
				else ans += 20;
			}
		}
		printf("%d\n", (999 / 3 * 20 * 10 + (999 - 999 / 3) * (20 + 19) * 5) - ans);
	}
	return 0;
}