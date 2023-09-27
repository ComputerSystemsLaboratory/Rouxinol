#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

static const long long FAR = (1LL << 31);
static const int N = 100;

int n, m;
bool visited[N];
long long d[N][N];


void floyd(){
	for (int k = 0; k < n; ++k) {
		for (int l = 0; l < n; ++l) {
			if (d[l][k] == FAR) continue;
			for (int r = 0; r < n; ++r) {
				if (d[k][r] == FAR) continue;
				d[l][r] = min(d[l][r], d[l][k] + d[k][r]);
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) d[i][j] = (i!=j)?FAR:0;
	}

	for (int i = 0; i < m; ++i) {
		int u, v, e; cin >> u >> v >> e;
		d[u][v] = e;
	}

	floyd();
	
	bool negitive = false;
	for (int i = 0; i < n; ++i){
		if (d[i][i] < 0) negitive = true;
	}

	if (negitive) cout << "NEGATIVE CYCLE" << endl;
	else{
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (j != 0) cout << " ";

				if (d[i][j] == FAR) cout << "INF";
				else cout << d[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}