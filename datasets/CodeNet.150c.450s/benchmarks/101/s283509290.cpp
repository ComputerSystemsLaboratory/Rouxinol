#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using msi = map<string, int>;
using mii = map<int, int>;
using psi = pair<string, int>;
using pii = pair<int, int>;
using vlai = valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1E9
#define EPS 1E-9
#define MOD (ll)(1E9+7)
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}

vi par;
vi ran;

int find(int x) {
	if (par[x] == x) {
		return x;
	}
	else {
		return par[x] = find(par[x]);
	}
}

void unite(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return;
	if (ran[x] < ran[y]) {
		par[x] = y;
	}else {
		par[y] = x;
		if (ran[x] == ran[y]) ran[x]++;
	}
}

bool same(int x, int y) {
	return find(x) == find(y);
}


int main() {
	int n, m,a,b;
	cin >> n >> m;
	par.resize(n);
	rep(i, n) {
		par[i] = i;
	}
	ran.resize(n,0);
	rep(i, m) {
		cin >> a >> b;
		unite(a, b);
	}
	cin >> m;
	rep(i, m) {
		cin >> a >> b;
		cout << (same(a, b) ? "yes" : "no") << endl;
	}
}

