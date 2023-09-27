#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

signed main(){
	int a, b, n, x, y;
	int dp[20][20];
	while (1) {
		cin >> a >> b >> n;
		if (a + b == 0) break;
		rep(i, 0, 20) {
			rep(j, 0, 20) {
				dp[i][j] = 0;
			}
		}
		rep(i, 0, n) {
			cin >> x >> y;
			x--;
			y--;
			dp[x][y] = -1;
		}
		dp[0][0] = 1;
		rep(i, 0, a) {
			rep(j, 0, b) {
				if (i != 0 && dp[i][j] != -1) {
					dp[i][j] += max((int)0, dp[i - 1][j]);
				}
				if (j != 0 && dp[i][j] != -1) {
					dp[i][j] += max((int)0, dp[i][j - 1]);
				}
			}
		}
		cout << dp[a - 1][b - 1] << endl;
	}
}