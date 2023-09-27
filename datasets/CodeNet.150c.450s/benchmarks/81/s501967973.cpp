#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
//#define int long long
using namespace std;

#define INF 999999

int n;
int d[10][10];
int a, b, c;

signed main()
{
	while (true)
	{
		cin >> n;
		if (n == 0) break;

		rep(i,10) rep(j,10) d[i][j] = INF;

		int machi_kazu = 0;
		rep(i,n)
		{
			cin >> a >> b >> c;
			if (machi_kazu < a) machi_kazu = a;
			if (machi_kazu < b) machi_kazu = b;
			d[a][b] = c;
			d[b][a] = c;
		}

		rep(i,10) d[i][i] = 0;

		rep(k,10) rep(i,10) rep(j,10) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

		/*
		rep(i,10)
		{
			rep(j,10)
			{
				printf("% 3d ", d[i][j]);
			}
			printf("\n");
		}
		*/

		int machi_ans = 0;
		int ans_min_souwa = INF;
		for (int i=0; i<=machi_kazu; i++)
		{
			int souwa = 0;
			for (int j=0; j<=machi_kazu; j++)
			{
				souwa += d[i][j];
			}

			if (souwa < ans_min_souwa)
			{
				machi_ans = i;
				ans_min_souwa = souwa;
			}
		}

		printf("%d %d\n", machi_ans, ans_min_souwa);
	}
}