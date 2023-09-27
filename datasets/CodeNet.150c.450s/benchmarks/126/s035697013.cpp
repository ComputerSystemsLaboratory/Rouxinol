#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
//#define int long long
using namespace std;

int a, b;
int n;
int x, y;
//     y   x
int dp[17][17];

signed main()
{
	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cin >> n;

		rep(i,17) rep(j,17) dp[i][j] =  -1;

		rep(i,n) {
			cin >> x >> y;
			dp[y][x] = 0;
		}

		bool zero_flag = false;
		for (int i=1; i<=a; i++) {
			if (dp[1][i] == 0) zero_flag = true;
			if (zero_flag) dp[1][i] = 0;
			else dp[1][i] = 1;
		}
		zero_flag = false;
		for (int i=1; i<=b; i++) {
			if (dp[i][1] == 0) zero_flag = true;
			if (zero_flag) dp[i][1] = 0;
			else dp[i][1] = 1;
		}

		for (int i=2; i<=a; i++) {
			for (int j=2; j<=b; j++) {
				if (dp[j][i] == -1) {
					dp[j][i] = dp[j-1][i] + dp[j][i-1];
				}
			}
		}

		/*
		for (int i=1; i<=b; i++) {
			for (int j=1; j<=a; j++) {
				printf("% 3d ", dp[i][j]);
			}
			cout << endl;
		}
		*/

		cout << dp[b][a] << endl;
	}
}