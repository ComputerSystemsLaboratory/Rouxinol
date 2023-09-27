#include <iostream>
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

set<string> se;
string s, t, u, v;
int ans;


void calc() {
	v = u + t;
	if (se.count(v) == 0) {
		ans++;
		se.insert(v);
		//cout << v << endl;
	}
	v = t + u;
	if (se.count(v) == 0) {
		ans++;
		se.insert(v);
		//cout << v << endl;
	}
}


int main() {
	int n;
	cin >> n;
	rep(i, n) {
		cin >> s;
		se.clear();
		ans = 0;
		rep(j, s.size()) {
			t = s.substr(0, j);
			u = s.substr(j, s.size());
			calc();
			reverse(all(t));
			calc();
			reverse(all(u));
			calc();
			reverse(all(t));
			calc();
		}
		cout << ans << endl;
	}
}