#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0;i<(n);i++)
int N, M;
int x[1505];
int y[1505];
int co[3000005];
int main()
{
	while (true)
	{
		cin >> N >> M;
		if (N == 0 && M == 0) break;
		x[0] = 0;
		y[0] = 0;
		rep(i, N)
		{
			int a;
			cin >> a;
			x[i + 1] = x[i] + a;
		}
		rep(j, M)
		{
			int a;
			cin >> a;
			y[j + 1] = y[j] + a;
		}

		rep(i, N + 1)
		{
			rep(j, M + 1)
			{
				int p = y[j] - x[i];
				co[1500000 + p]++;//1500000
			}
		}
		int ans = 0;
		rep(i, 3000005)	ans += co[i] * (co[i] - 1) / 2; //3000005
		cout << ans << endl;
		memset(x, 0, sizeof x);
		memset(y, 0, sizeof y);
		memset(co, 0, sizeof co);
	}
	return 0;
}
