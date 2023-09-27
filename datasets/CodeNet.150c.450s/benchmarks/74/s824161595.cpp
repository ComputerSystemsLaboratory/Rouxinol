#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>
#include<set>
#include<array>
#include<cassert>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i);

using namespace std;

const int MAX=21;
const int INF=1<<29;

int dp[MAX][50001];

int main(){
	int n, m;
	int coin[MAX];
	cin >> n >> m;
	for (int i = 0; i < m; i ++) {
		cin >> coin[i];
	}
	dp[0][0] = 0;
	for (int k = 1; k <= n; k ++) {
		dp[0][k] = INF;
	}
	for (int i = 1; i <= m; i ++) {
		int d = coin[i - 1];
		for (int k = 0; k <= n; k ++) {
			if (k >= d) {
				dp[i][k] = min(dp[i-1][k], dp[i][k-d] + 1);
			} else {
				dp[i][k] = dp[i-1][k];
			}
		}
	}
	
	cout << dp[m][n] << endl;

	return 0;

}