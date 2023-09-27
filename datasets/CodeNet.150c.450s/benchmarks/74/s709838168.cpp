#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

const int INF = INT_MAX / 3;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> coin(n, 0);
	rep(i, m) cin >> coin[i];	
	vector<int> dp(n+1, INF); // n????????£?????´??????????°??????° 
	
	dp[0] = 0;
	for(int i = 0; i < m; ++i) {
		for(int j = coin[i]; j <= n; ++j) {	
			dp[j] = min(dp[j], dp[j-coin[i]] + 1);		
		}
	}

	cout << dp[n] << endl;
	return 0;
}