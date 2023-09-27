#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<tuple>
#include<complex>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF (long long)1000000000
#define MOD 1000000007
#define EPS (long double) 1e-8
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> P;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};

using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	vector<int> c(m);
	REP(i, m) cin>>c[i];
	int dp[m + 1][n + 1];
	REP(i, n + 1) dp[0][i] = INF;
	dp[0][0] = 0;
	FOR(i, 1, m + 1) {
		REP(j, n + 1) {
			if(j == 0) dp[i][j] = 0;
			else if(j >= c[i - 1]) dp[i][j] = min(dp[i - 1][j], dp[i][j - c[i - 1]] + 1);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout<<dp[m][n]<<endl;
}