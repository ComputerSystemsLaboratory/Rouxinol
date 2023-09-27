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

vvi cost;
int n;

ll prim() {

	//O(n^2)

	vi mincost(n,INF);
	mincost[0] = 0;
	ll res = 0;
	vector<bool> used(n,false);

	while (1) {
		int v = -1;
		rep(i, n) {
			if (!used[i] && (v == -1 || mincost[i] < mincost[v]))v = i;
		}
		if (v == -1)break;
		used[v] = true;
		res += mincost[v];
		rep(i, n) {
			mincost[i] = min(mincost[i], cost[v][i]);
		}
	}
	return res;
}

int main() {
	int in;
	cin >> n;
	rep(i, n) {
		vi tmp;
		rep(j, n) {
			cin >> in;
			tmp.push_back((in!=-1?in:INF));
		}
		cost.push_back(tmp);
	}
	cout << prim() << endl;
}
