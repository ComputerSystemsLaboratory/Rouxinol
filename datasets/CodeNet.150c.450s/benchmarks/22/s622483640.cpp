#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdint.h>
#include <queue>
#include <bitset>
#include <iomanip>
#include <set>
#include <map>

using namespace std;

#define PI (3.14159265358979323846)
#define INF (2147483647)
#define INF_LL (9223372036854775807)
#define DIV_NUM (1000000007)

#define MAX_E (500000)
#define MAX_V (100000)

int V, E; // V:頂点数、E:辺数
struct edge { int from, to, cost; }; // 辺の構造
vector<edge> es; // 辺のメモリを確保
int d[MAX_V];

// ベルマンフォード法　O(VE)
// 配列dに基点sからの最短距離を返す
// 戻り値：sから到達可能なネガティブループがある(true) ない(false)
bool shortest_path(int s) {
	for (int i = 0; i < V; i++) {
		d[i] = INF;
	}
	d[s] = 0;
	for (int i = 0; i < V; i++) {
		bool update = false;
		for (int j = 0; j < es.size(); j++) {
			edge e = es[j];
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				// 基点が既に計算済みの辺で、コストがより小さくなるならそのコストを採用
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if (!update) return false; // 更新が終わればループを抜ける
	}
	return true; //V回目まで更新がある場合はネガティブループあり
}

int main() {

	cin >> V >> E;
	int r;
	cin >> r;


	for (int i = 0; i < E; i++) {
		edge tmp;
		cin >> tmp.from >> tmp.to >> tmp.cost;
		es.push_back(tmp); // 有向グラフ
	}

	if (shortest_path(r)) {
		cout << "NEGATIVE CYCLE" << endl;
	}
	else {
		for (int i = 0; i < V; i++) {
			if (d[i] < INF) cout << d[i] << endl;
			else cout << "INF" << endl;
		}
	}


	return 0;

}
