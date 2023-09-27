#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#pragma warning(disable : 4996)
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<time.h>
#include<random>
#include<array>

using namespace std;

#define REP(i, n) for(int i = 0;i < n;++i)
#define REPR(i, n) for(int i = n-1;i >= 0;--i)
#define FOR(i, m, n) for(int i = m;i < n;++i)
#define FORR(i, m, n) for(int i = m-1;i >= n;--i)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define REVERSE(v,n) reverse(v,v+n);
#define VREVERSE(v) reverse(v.begin(), v.end())
#define ll long long
#define pb push_back
#define print(x) cout<<(x)<<'\n'
#define pe(x) cout<<(x)<<" "
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define lb(v,n) lower_bound(v.begin(), v.end(), (n))
#define ub(v,n) upper_bound(v.begin(), v.end(), (n))
#define int long long
//#define double long double
#define all(x) (x).begin(), (x).end()
#define print_space(v) REP(i,v.size())cout << v[i] << ((i == v.size() - 1) ? "\n" : " ")
template<typename T1, typename T2> inline void chmin(T1 & a, T2 b) { if (a > b) a = b; }
template<typename T1, typename T2> inline void chmax(T1& a, T2 b) { if (a < b) a = b; }
typedef pair<int, int>P;
const int MOD = 1e9 + 7; const int MAX = 500020;
const double pi = acos(-1); const double EPS = 1e-8;
const ll INF = 1e12;


int calc(string s) {
	int ans = 0;
	ans += 36000 * (s[0] - '0');
	ans += 3600 * (s[1] - '0');
	ans += 600 * (s[3] - '0');
	ans += 60 * (s[4] - '0');
	ans += 10 * (s[6] - '0');
	ans += (s[7] - '0');
	//pe(s); cout << ":" << ans << endl;
	return ans;
}
void solve() {
	int N; cin >> N;
	if (N == 0)exit(0);
	vector<P>v;
	REP(i, N) {
		string S, T; cin >> S >> T;
		//pe(S); print(T);
		int l = calc(S), r = calc(T);
		v.push_back({ l,r });
	}
	VSORT(v);
	priority_queue<int,vector<int>,greater<int>>que;
	int ans = 0;
	REP(i, N) {
		int r = v[i].second, l = v[i].first;
		while (!que.empty()) {
			if (que.top() <= l)que.pop();
			else break;
		}
		chmax(ans, que.size() + 1);
		que.push(r);
	}
	print(ans);
}

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	//int q; cin >> q;
	//while (q--)

	while(true)
	solve();
}


