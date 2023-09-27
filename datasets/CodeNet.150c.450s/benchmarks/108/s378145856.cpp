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

void bfs(vector<vector<int>> a, vector<int> &d) {
	int n = a.size();
	queue<int> qu;
	qu.push(0);
	while (!qu.empty()) {
		int i = qu.front();
		qu.pop();
		REP(j, n) {
			if (d[j] == -1 && a[i][j]) {
				d[j] = d[i] + 1;
				qu.push(j);
			}
		}
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
	vector<int> d(n, -1);
	d[0] = 0;
	bfs(a, d);
	REP(i, n) {
		cout << i + 1 << " " << d[i] << "\n";
	}

	return 0;
}
