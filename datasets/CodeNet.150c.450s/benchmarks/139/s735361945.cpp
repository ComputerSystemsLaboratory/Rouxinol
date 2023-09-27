#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb emplace
#define pi pair <int, int>
#define time cerr << '\n' << (double)clock()/CLOCKS_PER_SEC << '\n'; return 0

int n, m, dist[200100], ans[200100];
vector <int> G[200100];

void bfs(int source) {
    memset(dist, -1, sizeof(dist));
    queue <int> q;
    q.pb(source);
    dist[source] = 0;
    while (q.size()) {
		int u = q.front();
		q.pop();
		for(int j = 0; j < G[u].size(); ++j) {
			int v = G[u][j];
			if (dist[v] == -1) {
				q.push(v);
				dist[v] = dist[u] + 1;
                ans[v] = u;
			}
		}
	}
    // assert(0);
    // if (dist[1] != -1) ans.push_back(dist[1]); 
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= m; ++i) {
        int a, b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    bfs(1);
    bool ok = true;
    for(int i = 2; i <= n; ++i) {
        if (dist[i] == -1) ok = false;
    }
    if (ok) {
        cout << "Yes\n";
        for(int i = 2; i <= n; ++i) {
            cout << ans[i] << '\n';
        }
        time;
    } else {
        cout << "No";
        time;
    }
}