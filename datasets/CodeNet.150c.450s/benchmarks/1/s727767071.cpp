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
	int n;
	cin>>n;
	vector<int> a(n);
	REP(i, n) cin>>a[i];
	vector<int> dp(n + 1);
	dp[0] = -1;
	FOR(i, 1, n + 1) {
		dp[i] = INF;
	}
	FOR(i, 1, n + 1) {
		vector<int>::iterator ite = lower_bound(ALL(dp), a[i - 1]);
		if(ite != a.end()) *ite = a[i - 1];
	}
	int res = 0;
	REP(i, n + 1) {
		if(dp[i] != INF) res = i;
	}
	cout<<res<<endl;
}