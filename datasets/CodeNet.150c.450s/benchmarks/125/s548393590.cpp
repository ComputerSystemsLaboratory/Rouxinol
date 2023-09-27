#include<iostream>
#include<climits>
#include<vector>
#include<list>
#include<functional>
#include<algorithm>
#include<string>
#include<cmath>
#include<complex>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<tuple>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define INF (int)1e9
#define INFL (ll)1e11
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

void dfs(int i, vector<vector<int>> a, vector<int> &d, vector<int> &f) {
	int n = a.size();
	int next = -1;
	REP(j, n) {
		if (d[j] == 0 && a[i][j]) {
			if (next == -1) d[j] = d[i] + 1;
			else d[j] = f[next] + 1;
			next = j;
			dfs(j, a, d, f);
		}
	}
	if (next == -1) f[i] = d[i] + 1;
	else f[i] = f[next] + 1;
}

void dfs_all(vector<vector<int>> a, vector<int> &d, vector<int> &f) {
	int i = 0;
	int n = a.size();
	int end = -1;
	while (1) {
		if (end == -1) d[0] = 1;
		else {
			while (d[i] > 0) i++;
			if (i == n) return;
			d[i] = f[end] + 1;
		}
		end = i;
		dfs(i, a, d, f);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n, 0));
	REP(i, n) {
		int u, k;
		cin >> u >> k;
		u--;
		REP(j, k) {
			int v;
			cin >> v;
			a[u][--v] = 1;
		}
	}
	vector<int> d(n + 1, 0);
	d[0] = 1;
	vector<int> f(n);
	dfs_all(a, d, f);
	
	REP(i, n) {
		cout << i + 1 << " " << d[i] << " " << f[i] << "\n";
	}

	return 0;
}


