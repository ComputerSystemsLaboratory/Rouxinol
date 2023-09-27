#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

#define repa(i, a, b) for (auto i = (a); i <= (b); i++)
#define repd(i, a, b) for (auto i = (a); i >= (b); i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define zero(a)  memset((a), 0, sizeof (a))
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back

constexpr auto inf = numeric_limits<int>().max();
constexpr auto llinf = numeric_limits<ll>().max();

template<typename ForwardIterator>
void dump(ForwardIterator st, ForwardIterator en) {
	for (auto it = st; it != en; it++) {
		cout << *it << " ";
	}
	cout << endl;
}

template<typename ForwardIterator>
void dump_map(ForwardIterator st, ForwardIterator en) {
	for (auto it = st; it != en; it++) {
		cout << (*it).first << ":" << (*it).second << " ";
	}
	cout << endl;
}

template<typename T>
void debug(initializer_list<T> list) {
  for (auto el : list) {
    cout << el << " ";
  }
  cout << endl;
}

int n, m;
vvi adj;
constexpr int mxN = 100010;
bitset<mxN> visited;
vi parent;

void bfs(int st) {
	queue<int> q;
	q.push(st);
	while (!q.empty()) {
		auto u = q.front();
		// debug({u}); 
		q.pop();
		if (visited.test(u)) continue;
		for (auto v : adj[u]) {
			if (!visited.test(v)) {
				if (parent[v] == -1) {
					parent[v] = u;
				}
				q.push(v);
			}
		}
		visited.set(u);
	}
}

void solve() {
	cin >> n >> m;
	adj.resize(n + 1);
	int a, b;
	rep(i, m) {
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	// repa(i, 1, n) {
	// 	cout << i << ": ";
	// 	dump(all(adj[i]));
	// }
	visited.reset();
	parent.resize(n + 1);
	fill(all(parent), -1);
	bfs(1);
	if (find(parent.begin() + 2, parent.end(), -1) == parent.end()) {
		cout << "Yes\n";
		repa(i, 2, n) {
			cout << parent[i] << "\n";
		}
	} else {
		cout << "No\n";
	}
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
