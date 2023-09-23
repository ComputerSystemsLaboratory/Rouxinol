#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int w, h, n, a, b;
	while(cin >> w >> h) {
		if(w == 0 && h == 0) break;

		ll dp[50][50];
		memset(dp, 0, sizeof(dp));

		cin >> n;
		rep(i, n) {
			cin >> a >> b;
			dp[b][a] = -1;
		}

		REP(i, 1, w + 1) {
			if(dp[1][i] == -1) break;
			dp[1][i] = 1;
		}

		REP(i, 1, h + 1) {
			if(dp[i][1] == -1) break;
			dp[i][1] = 1;
		}

		REP(i, 2, h + 1) {
			REP(j, 2, w + 1) {
				if(dp[i][j] == -1) continue;

				if(dp[i-1][j] != -1) dp[i][j] += dp[i-1][j];
				if(dp[i][j-1] != -1) dp[i][j] += dp[i][j-1];
			}
		}

		cout << dp[h][w] << endl;
	}

	return 0;
}