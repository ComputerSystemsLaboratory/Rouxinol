#include <bits/stdc++.h>
using namespace std;

#define out cout 
#define in cin
#define el endl
#define rep(i, N) for (int i = 0; i < N; i++)
#define ol(N) cout << N << endl

int main()
{
	int x, y;
	while (in >> x >> y, x || y){
		int n, dp[17][17] = {0};
		bool f[17][17] = {false};

		in >> n;
		rep(i, n){
			int a, b;
			in >> a >> b;
			f[--b][--a] = true;
		}
		dp[0][0] = 1;
		for (int i = 0; i < y; i++){
			for (int j = 0; j < x; j++){
				if (!f[i + 1][j]) dp[i + 1][j] += dp[i][j];
				if (!f[i][j + 1]) dp[i][j + 1] += dp[i][j];
			}
		}
		ol(dp[--y][--x]);
	}
	return (0);
}