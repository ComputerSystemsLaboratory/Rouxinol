#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define rept(i,n) for(int (i)=0;(i)<=(int)(n);(i)++)
#define reps(i,s,n) for(int (i)=(s);(i)<(int)(n);(i)++)
#define repst(i,s,n) for(int (i)=(s);(i)<=(int)(n);(i)++)
#define repr(i,n) for(int (i)=(n);(i)>=0;(i)--)
#define ln << "\n"

const int inf = (int)1e9;
int n, m, c[21], dp[21][50001];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	repst(i,1,m) cin >> c[i];
	rept(i,m) fill(dp[i], dp[i]+n+1, inf);
	dp[0][0] = 0;
	repst(i,1,m) {
		rept(j,n) {
			if (j<c[i]) dp[i][j] = dp[i-1][j];
			else dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]]+1);
		}
	}
	cout << dp[m][n] ln;
}