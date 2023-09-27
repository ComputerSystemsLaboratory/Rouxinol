#include "bits/stdc++.h"
using namespace std;

const int MAX_E = 2010;
const int MAX_V = 1010;

#define INF (1 << 29)

// 頂点と頂点を結ぶ辺についての構造体
struct edge { int from, to, cost; };

edge es[MAX_E]; // 辺

int d[MAX_V];
int V, E;

//	ベルマンフォード（単一始点最短経路（Negative Edges))
// 負の閉路が存在したら true を返す
bool bellman_ford(int s) {
	int cnt = 0;
	// 最短距離の初期化
	for (int i = 0; i<V; i++) d[i] = INF;
	// 頂点 s への最短距離は0
	d[s] = 0;
	while (true) {
		cnt++;
		bool update = false;
		// すべての辺に対して
		for (int i = 0; i < E; i++) {
			edge e = es[i];
			// この時点での e.to へ行くコストより e.from を経由して行く方がコストが小さいとき d[e.to] を更新する
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				// V回目のループで更新が行われた場合、負の閉路が存在する
				if(cnt == V) return true;
				update = true;
			}
		}
		// 更新がなければ終了
		if (!update) break;
	}
	return false;
}

int main() {
	int r;
	cin >> V >> E >> r;
	int from, to, cost;

	for (int i = 0; i<E; i++) {
		cin >> from >> to >> cost;
		es[i] = edge{ from, to, cost };
	}

	if (bellman_ford(r)) {
		cout << "NEGATIVE CYCLE" << endl;
	}
	else {
		for (int i = 0; i < V; i++) {
			if(d[i]==INF) cout << "INF" << endl;
			else cout << d[i] << endl;
		}
	}

}

