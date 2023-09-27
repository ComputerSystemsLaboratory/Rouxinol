#include <bits/stdc++.h>
using namespace std;
void fast() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
}
void ran() {
	srand(chrono::steady_clock::now().time_since_epoch().count());
}
long long get_rand() {
	long long a = rand();
	long long b = rand();
	return a * (RAND_MAX + 1ll) + b;
}
void usaco() {
	freopen("problem.in", "r", stdin); 
	freopen("problem.out", "w", stdout);
}
// #define endl '\n'
// #define double long double
// #define int long long
// int MOD = 1000 * 1000 * 1000 + 7;
// int MOD = 998244353;

const int MXN = 100005;
vector<int> adj[MXN];
int dist[MXN];
int par[MXN];

signed main() {

	ran(); fast();

	int n, m;
	cin >> n >> m;
	for (int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	for (int i=0; i<MXN; i++) dist[i] = INT_MAX;
	
	queue<pair<int, int>> proc;
	proc.push({1, 0});
	
	while (!proc.empty()) {
		
		auto x = proc.front(); proc.pop();
		
		int no = x.first, di = x.second;
		
		if (dist[no] < di) continue;
		dist[no] = di;
		
		for (auto x: adj[no]) {
			int ot = x;
			if (dist[ot] > di + 1) {
				dist[ot] = di + 1;
				par[ot] = no;
				proc.push({ot, di+1});
			}
		}
		
	}

	for (int i=1; i<=n; i++) {
		if (dist[i] == INT_MAX) {
			cout << "No" << endl;
			exit(0);
		}
	}

	cout << "Yes" << endl;
	for (int i=2; i<=n; i++) {
		cout << par[i] << endl;
	}

}
