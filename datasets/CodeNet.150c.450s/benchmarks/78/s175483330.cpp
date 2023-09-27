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

int dp1[1000001];
int dp2[1000001];

set<int> por;
vector<int> porv;
set<int> pork;
vector<int> porkv;

int rec1(int n) {
	cout<<n<<endl;
	if(n < 0) return INF;
	if(dp1[n] != INF) return dp1[n];
	if(por.count(n) != 0) return 1;
	int res = INF;
	REP(i, porv.size()) {
		res = min(res, rec1(n - porv[i] ) + 1);
	}
	return dp1[n] = res;
}

int rec2(int n) {
	cout<<n<<endl;
	if(n < 0) return INF;
	if(dp2[n] != INF) return dp2[n];
	if(pork.count(n) != 0) return 1;
	int res = INF;
	REP(i, porkv.size()) {
		res = min(res, rec2(n - porkv[i]) + 1);
	}
	return dp2[n] = res;
}

int main() {
	REP(i, 1000001) dp1[i] = dp2[i] = INF;
	dp1[0] = 0;
	dp2[0] = 0;
	int buf = 1;
	while(buf * (buf + 1) * (buf + 2) / 6 <= pow(10, 6)) {
		por.insert(buf * (buf + 1) * (buf + 2) / 6);
		porv.pb(buf * (buf + 1) * (buf + 2) / 6);
		if((buf * (buf + 1) * (buf + 2) / 6) % 2 == 1) {
			pork.insert(buf * (buf + 1) * (buf + 2) / 6);
			porkv.pb(buf * (buf + 1) * (buf + 2) / 6);
		}
		++buf;
	}
	sort(ALL(porv));
	sort(ALL(porkv));
	REP(i, 1000001) {
		if(i == 0) dp1[i] = 0;
		else if(por.count(i) != 0) dp1[i] = 1;
		else {
			int roc = 0;
			int res = INF;
			while(roc < porv.size() && i - porv[roc] >= 0) {
				res = min(res, dp1[i - porv[roc]] + 1);
				++roc;
			}
			dp1[i] = res;
		}
	}
	REP(i, 1000001) {
		if(i == 0) dp2[i] = 0;
		else if(pork.count(i) != 0) dp2[i] = 1;
		else {
			int roc = 0;
			int res = INF;
			while(roc < porkv.size() && i - porkv[roc] >= 0) {
				res = min(res, dp2[i - porkv[roc]] + 1);
				++roc;
			}
			dp2[i] = res;
		}
	}
	while(1) {
		int n;
		cin>>n;
		if(n == 0) break;
		cout<<dp1[n]<<" "<<dp2[n]<<endl;
	}
}