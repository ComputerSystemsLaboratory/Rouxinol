#include <bits/stdc++.h>

using namespace std;

//ABC079-Dの問題

const long long inf = 1LL << 62;

void warshall_floyd(int n, vector<vector<long long>> &d) {
	for (int k = 0; k < n; k++) {       // 経由する頂点
		for (int i = 0; i < n; i++) {    // 始点
			if (d[i][k] == inf) { continue; }
			for (int j = 0; j < n; j++) {  // 終点
				if (d[k][j] == inf) { continue; }
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}

int main() {

	int v, e; //頂点数、エッジ数
	cin >> v >> e;

	//10までの隣接行列を読み込む
	//この問題では有向きグラフG[始点][終点]
	vector<vector<long long>> G(v, vector<long long>(v, inf));
	int s, t, d;
	for (int i = 0; i < e; i++) {
		cin >> s >> t >> d;
		G[s][t] = d;
	}

	for (int i = 0; i < v; i++) {
		G[i][i] = 0; //自分の場合は0にする（ループしない）
	}

	warshall_floyd(v, G);

	//こっからはこの問題専用。
	for (int i = 0; i < v; i++) {
		if (G[i][i] != 0) {
			cout << "NEGATIVE CYCLE" << endl; //この問題では負の閉路ははじく
			return 0;
		}
	}

	for (int i = 0; i < v; i++) {
		int j;
		for (j = 0; j < v - 1; j++) {
			if (G[i][j] != inf) {
				cout << G[i][j] << " ";
			}
			else { 
				cout << "INF" << " ";
			}
		}
		if (G[i][j] != inf) {
			cout << G[i][j] << endl;
		}
		else {
			cout << "INF" << endl;
		}
	}

	return 0;

}
