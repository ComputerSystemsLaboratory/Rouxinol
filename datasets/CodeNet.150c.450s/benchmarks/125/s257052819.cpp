#include <bits/stdc++.h>

#define M_PI       3.14159265358979323846   // pi

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> VI;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> t3;
typedef tuple<ll, ll, ll, ll> t4;
typedef tuple<ll, ll, ll, ll, ll> t5;

#define rep(a,n) for(ll a = 0;a < n;a++)
#define repi(a,b,n) for(ll a = b;a < n;a++)

using namespace std;

static const ll INF = 1e15;

int main() {
	ll n;
	cin >> n;
	vector<vector<ll>> g(n);
	rep(i, n) {
		int a, k;
		cin >> a >> k;
		rep(j, k) {
			int t;
			cin >> t;
			t--;
			g[i].push_back(t);
		}
	}

	vector<bool> visit(n, false);

	vector<int> start(n);
	vector<int> finish(n);

	int t = 0;

	function<void(int)> dfs = [&](int current){
		if (visit[current]) return;
		visit[current] = true;
		t++;
		start[current] = t;
		for (auto p : g[current]) {
			dfs(p);
		}
		t++;
		finish[current] = t;
		return;
	};
	rep(i, n) {
		dfs(i);
	}
	rep(i, n) {
		cout << i + 1 << " " << start[i] << " " << finish[i] << endl;
	}
	return 0;
}

