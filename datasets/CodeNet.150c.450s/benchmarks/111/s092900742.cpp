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
	int n;
	cin >> n;

	vector<int> v(n);
	rep(i, n) {
		cin >> v[i];
	}

	ll dp[105][105];
	memset(dp, 0, sizeof(dp));

	dp[0][v[0]] = 1;

	REP(i, 1, n-1) {
		rep(j, 21) {
			if(j + v[i] <= 20) {
				dp[i][j + v[i]] += dp[i-1][j];
			}

			if(j - v[i] >= 0) {
				dp[i][j - v[i]] += dp[i-1][j];
			}
		}
	}

	cout << dp[n-2][v[n-1]] << endl;

	return 0;
}