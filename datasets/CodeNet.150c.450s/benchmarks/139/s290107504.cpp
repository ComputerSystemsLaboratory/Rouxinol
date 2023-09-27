#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define db(a) cout << fixed << #a << " = " << a << endl;

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int MAXN = 1e5 + 5;
vector<int> graph[MAXN];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	vector<int> P(n, -1);
	queue<int> que;
	que.push(0);
	P[0] = 0;
	while (!que.empty()) {
		int nn = que.front(); que.pop();
		for (int neigh: graph[nn]) {
			if (P[neigh] == -1) {
				que.push(neigh);
				P[neigh] = nn;
			}
		}
	}
	vector<int> ans;
	for (int i = 1; i < n; i++) {
		if (P[i] == -1) {
			//db(i);
			cout << "No" << endl;
			return 0;
		} else {
			ans.push_back(P[i]);
		}
	}
	cout << "Yes" << endl;
	for (auto a: ans) {
		cout << a + 1 << "\n";
	}
}

