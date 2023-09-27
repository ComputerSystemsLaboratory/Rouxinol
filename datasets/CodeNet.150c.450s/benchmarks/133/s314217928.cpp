#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <set>
#include <map>
#include <bitset>
#include <cmath>
#include <functional>

using namespace std;

#define REP(i,n) for(ll (i) = (0);(i) < (n);++i)
#define REV(i,n) for(ll (i) = (n) - 1;(i) >= 0;--i)
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {REP(WW,n)cerr << v[WW] << ' ';cerr << endl;}
#define SHOW2d(v,WW,HH) {REP(W_,WW){REP(H_,HH)cerr << v[W_][H_] << ' ';cerr << endl;}}
#define ALL(v) v.begin(),v.end()
#define Decimal fixed<<setprecision(20)
#define INF 1000000000
#define LLINF 1000000000000000000LL
#define MOD 998244353

typedef long long ll;
typedef pair<ll,ll> P;

int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);

	ll d;cin >> d;
	vector<ll> c(26);REP(i, 26)cin >> c[i];
	vector<vector<ll>> s(d, vector<ll>(26));
	REP(i, d)REP(j, 26)cin >> s[i][j];
	vector<ll> now(26);

	ll score = 0;
	REP(i, d){
		ll a;cin >> a;a--;
		score += s[i][a];
		REP(j, 26)now[j]++;
		now[a] = 0;
		REP(j, 26)score -= c[j] * now[j];
		cout << score << endl;
	}

	return 0;
}
