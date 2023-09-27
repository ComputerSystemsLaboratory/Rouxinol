#include <bits/stdc++.h>

using namespace std;

const int INF = 1 << 30;

struct edge {
	int cost; //重み(距離)
	int to; //行先の頂点
};

void dijkstra(const int n, const vector<vector<edge>> &G, const int stpoint) {

	//優先キューは最短距離と頂点番号のペア、 距離を降順に並べる
	//優先キューは通常大きい順に出していく。小さい順にする場合下のように書く。
	priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

	vector<bool> seen(n,false); //訪問完了でtrue
	vector<int> cost(n,INF); //頂点nまでの距離

	cost[stpoint] = 0;
	pq.push(make_pair(0, stpoint));

	while (pq.empty() == false) {

		//ターゲット頂点設定（すでに決定したものの中のどれか）
		pair<int, int> target = pq.top();
		int tnum = target.second; //ターゲット頂点番号
		pq.pop();
		
		seen[tnum] = true;

		//キューに長い距離が既に入っている場合があるのでそれはもうスキップしていい。
		//（あとから短い距離が入ってきた場合優先キューでそれが処理されてるから。）
		if (cost[tnum] < target.first) { continue; } //これの意味が分からない保留

		for (unsigned int j = 0; j < G[tnum].size(); j++) { //ターゲットから繋がる先を全部探す

			int v = G[tnum][j].to; //繋がる先の頂点をvにする

			if (seen[v] == true) { continue; } //もう見たとこ（仲間に入ってる）ならスキップ

			if (cost[v] > cost[tnum] + G[tnum][j].cost) {
				cost[v] = cost[tnum] + G[tnum][j].cost;
				pq.push(make_pair(cost[v], v));
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << (cost[i]<INF? to_string(cost[i]) : "INF") << endl;
	}

}

int main() {

	int v,e,r;
	cin >> v >> e >>r;

	int stpoint = r;

	vector<vector<edge>> G(v);

	int in1, in2, in3;
	for (int i = 0; i < e; i++) {
		cin >> in1 >> in2 >> in3;
		G[in1].push_back({ in3, in2 });
	}

	dijkstra(v,G,stpoint);

	return 0;
}
