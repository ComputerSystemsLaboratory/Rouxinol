#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;




const int INF = 1000000;
const int mod = 1e9 + 7;




int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) break;
		vector<pii> v(n);
		rep(i, n) cin >> v[i].second >> v[i].first;
		sort(all(v));
		reverse(all(v));
		int ans = 0, d;
		rep(i, n) {
			d = min(m, v[i].second);
			m -= d;
			v[i].second -= d;
			ans += v[i].first*v[i].second;
		}
		cout << ans << endl;
	}
}