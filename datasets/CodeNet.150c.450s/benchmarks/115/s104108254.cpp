#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string X, Y;
int v[1001][1001];

int  dp(string X, string Y) {
	int n = X.size();
	int m = Y.size();

	for (int i = 0; i <= n; i++) {
		v[i][0] = 0;											///０のテーブル
		for (int j = 0; j <= m; j++) {
			v[0][j] = 0;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (X[i-1] == Y[j-1]) {
				v[i][j] = v[i - 1][j - 1] + 1;
			}
			else {
				v[i][j] = max(v[i - 1][j], v[i][j - 1]);
			}
		}
	}
	return v[n][m];
}

int main(void)
{
	int x;
	cin >> x;
	
	for (int i = 0; i < x; i++) {
		cin >> X >> Y;
		int ans = dp(X, Y);
		cout << ans << endl;
	}
	
	
}
