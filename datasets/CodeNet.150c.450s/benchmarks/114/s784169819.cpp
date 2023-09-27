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

int n;
vvi cost;
vi mincos;
vector<bool> used;

int prim() {
	rep(i, n) {
		mincos[i] = INF;
		used[i] = false;
	}
	mincos[0] = 0;
	int res = 0;
	while (1) {
		int v = -1;
		rep(u, n) {
			if(!used[u]&&(v==-1||mincos[u]<mincos[v])){
				v = u;
			}
		}
		if (v == -1) break;
		used[v] = true;
		res += mincos[v];

		rep(u, n) {
			mincos[u] = min(mincos[u], cost[v][u]);
		}
	}
	return res;
}

int main() {
	int a,b;
	cin >> n ;
	cost.resize(n);
	mincos.resize(n);
	used.resize(n);
	for (auto &i : cost) {
		i.resize(n);
	}
	rep(i, n) {
		rep(j, n) {
			cin >> cost[i][j];
			if (cost[i][j] == -1) cost[i][j] = INF;
		}
	}
	cout << prim() << endl;
}

