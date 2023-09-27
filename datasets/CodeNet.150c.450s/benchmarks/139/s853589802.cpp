#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define PI acos(-1)
#define EPS 1e-5
#define sz(v) ((int)(v).size())
#define all(v) v.begin(),v.end()
#define forn(i, n) for(ll i=0;i<(ll)n;i++)
#define fi first
#define se second
 
const int maxN = 1e5+10;
vector<int> g[maxN];
vector<char> used(maxN, false);
vector<pii> res;
int cnt = 0;

void bfs(int v) {
	cnt++;
	queue<int> q;
	q.push(v);
	used[v] = true;
	
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for(int x : g[u]) {
			if(!used[x]) {
				cnt++;
				res.pb({x, u+1});
				used[x] = true;
				q.push(x);
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		g[a].pb(b);
		g[b].pb(a);
	}
	bfs(0);
	
	if(cnt < 0)
		cout << "No" << endl;
	else {
		cout << "Yes" << endl;
		sort(all(res));
		for(auto i : res) {
			cout << i.se << endl;
		}
	}
	return 0;
}

