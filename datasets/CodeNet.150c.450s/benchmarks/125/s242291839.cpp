#include <vector>
#include <iostream>
using namespace std;
int n, u, k, v, t, d[100][2]; vector<int> g[100];
void rec(int pos) {
	d[pos][0] = ++t;
	for(int i = 0; i < g[pos].size(); i++) {
		if(!d[g[pos][i]][0]) rec(g[pos][i]);
	}
	d[pos][1] = ++t;
}
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> u >> k;
		for(int j = 0; j < k; j++) cin >> v, g[u - 1].push_back(v - 1);
	}
	for(int i = 0; i < n; i++) {
		if(!d[i][0]) rec(i);
	}
	for(int i = 0; i < n; i++) cout << i + 1 << ' ' << d[i][0] << ' ' << d[i][1] << endl;
}