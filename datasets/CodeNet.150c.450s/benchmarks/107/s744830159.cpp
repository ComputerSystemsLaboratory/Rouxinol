/*16D8103008D 西村　悠輝　ALDS10C*/

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
		v[i][0] = i;											///０のテーブル
		for (int j = 0; j <= m; j++) {
			v[0][j] = j;
		}
	}
	

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (X[i-1] == Y[j-1]) {

				v[i][j]= v[i-1][j-1];
			}
			else {
				int y = min(v[i][j - 1] + 1, v[i - 1][j] + 1);
				if (y > v[i - 1][j - 1] + 1) {
					v[i][j] = v[i - 1][j - 1] + 1;
				}else{
					v[i][j] = y;
				}
			}
		}
	}
	return v[n][m];
}

int main(void)
{
	
	cin >> X >> Y;
	int ans = dp(X, Y);
	cout << ans << endl;
	
	
}
/*
acac
acm
2
*/
