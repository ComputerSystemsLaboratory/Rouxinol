#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;
const int INF = 1<<20;

int main() {
	int n;
	while(cin >> n, n) {
		int dp[10][10];
		bool exist[10] = {};
		rep(i, 10) rep(j, 10) dp[i][j] = INF;
		rep(i, 10) dp[i][i] = 0;
		rep(i, n) {
			int a, b, c;
			cin >> a >> b >> c;
			dp[a][b] = dp[b][a] = c;
			exist[a] = exist[b] = true;
		}
		rep(k, 10) {
			rep(i, 10) {
				rep(j, 10) {
					dp[i][j] = min( dp[i][j], dp[i][k]+dp[k][j] );
				}
			}
		}
		int mini = INF, res = INF;
		rep(i, 10) {
			if(!exist[i]) continue;
			int sum = 0;
			rep(j, 10) {
				if(!exist[j]) continue;
				sum += dp[i][j];
			}
			if( sum < mini ) {
				mini = sum;
				res = i;
			}
		}
		cout << res << ' ' << mini << endl;
	}
	return 0;
}