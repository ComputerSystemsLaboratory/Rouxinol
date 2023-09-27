//Apparat : drobucs, aleonov, vit_72
#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <iomanip>
#include <algorithm>
#include <string>
#include <queue>
#include <numeric>

//#pragma warning(disable : 4996)
//#pragma GCC optimize("O3")

using namespace std;

#define nptr nullptr
#define all(x) (x).begin(), (x).end()
#define drobucs ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define sz(x) (int)(x).size()

typedef  long long ll;

const int maxn = (int)1e6 + 13;
const ll INFL = 9223372036854775807;
const ll INF = 2147483647;
const ll MOD = (int)1e9 + 7, MOD2 = 998244353;//1e9 + 21, 1e9 + 33, 1e9 + 87, 1e9 + 93
const ll base = 101, base2 = 37;
bool vis[maxn];
int ans[maxn];
vector<int> gr[maxn];
void dfs(int v) {
	vis[v] = 1;
	for (auto t : gr[v])
		if (!vis[t])dfs(t);
}

int main() {
	drobucs;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; ++i) {
		int u, v;
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	int cnt = 0;
	for (int i = 1; i <= n; ++i)
		if (!vis[i])dfs(i), cnt++;
	if (cnt > 1) {
		cout << "No\n";
		return 0;
	}
	fill(vis, vis + n + 100, 0);
	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		vis[v] = 1;
		for (auto t : gr[v]) {
			if (!vis[t]) {
				q.push(t);
				vis[t] = 1;
				ans[t] = v;
			}
		}
	}
	cout << "Yes\n";
	for (int i = 2; i <= n; ++i)
		cout << ans[i] << "\n";
	return 0;
}