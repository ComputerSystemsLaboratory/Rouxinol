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
	string s, t;
	cin>>s>>t;
	int dp[s.size() + 1][t.size() + 1];
	REP(i, s.size() + 1) {
		REP(j, t.size() + 1) {
			if(i == 0 || j == 0) dp[i][j] = max(i, j);
			else {
				int cost = s[i - 1] != t[j - 1];
				dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + cost);
			}
		}
	}
	cout<<dp[s.size()][t.size()]<<endl;
}