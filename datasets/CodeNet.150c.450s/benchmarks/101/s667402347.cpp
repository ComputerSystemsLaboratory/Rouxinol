#include <bits/stdc++.h>
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
#define MOD (1E9+7)
#define PI 3.1415926535897932384

std::ostream &operator<<(std::ostream &out, const vector<int> &tgt)
{
	string s;
	for (int i = 0; i<tgt.size(); i++) {
		s += (to_string(tgt[i]) + ((i != tgt.size() - 1) ? " " : ""));
	}
	out << s;
	return out;
}

vi rnk,par;

int find(int x){
	if (par[x] == x) return x;
	return par[x] = find(par[x]);
}

void unite(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y)return;
	if (rnk[x] < rnk[y]) {
		par[x] = y;
	}
	else {
		par[y] = x;
		if (rnk[x] == rnk[y])rnk[x]++;
	}
}

bool same(int x, int y) {
	return (find(x) == find(y));
}

int main() {
	int n,m,a,b,q;
	cin >> n >> m;
	par.resize(n);
	rnk.resize(n);
	rep(i, n) {
		par[i] = i;
		rnk[i] = 0;
	}

	rep(i, m) {
		cin >> a >> b;
		unite(a, b);
	}
	cin >> q;
	rep(i, q) {
		cin >> a >> b;
		cout << (same(a, b) ? "yes" : "no") << endl;
	}

}
