#include <bits/stdc++.h>
using namespace std;
#define r(i,n) for(auto i=0;i<n;i++)
#define s(c) static_cast<int>((c).size())

int dp[1002][1002];

int main(){
	int n;
	cin >> n;
	int x, y;
	string X, Y;
	r(k, n){
		cin >> X >> Y;
		x = X.size();
		y = Y.size();
		X = ' ' + X;
		Y = ' ' + Y;

		r(i, x+1)
			r(j, y+1)
				dp[i][j] = 0;

		for (int i = 1; i <= x; i++) {
			for (int j = 1; j <= y; j++) {
				if (X[i] == Y[j]) {
					dp[i][j] = dp[i - 1][j - 1] + 1;
				} else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}

		cout << dp[x][y] << endl;
	}
	return 0;
}

