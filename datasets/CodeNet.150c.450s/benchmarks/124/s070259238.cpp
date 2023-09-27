#include <bits/stdc++.h>

using namespace std;

const int INF = 1 << 30;

struct edge {
	int cost; //重み(距離)
	int to; //行先の頂点
};

void dijkstra(const int n, const vector<vector<edge>> &G, const int stpoint) {

	//優先キューは最短距離と頂点番号のペア、 距離を降順に並べる
	priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

	vector<bool> seen(n,false); //訪問完了でtrue
	vector<int> cost(n,INF); //頂点nまでの距離

	cost[stpoint] = 0;
	pq.push(make_pair(0, 0));

	while (pq.empty() == false) {

		//ターゲット頂点設定（すでに決定したものの中のどれか）
		pair<int, int> target = pq.top();
		int tnum = target.second; //ターゲット頂点番号
		pq.pop();
		
		seen[tnum] = true;

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
		cout << i << " " << cost[i] << endl;
	}

}

int main() {

	int n;
	cin >> n;

	int stpoint = 0; //この問題では0起点

	vector<vector<edge>> G(n);

	int in1, in2, in3, in4;
	for (int i = 0; i < n; i++) {
		cin >> in1 >> in2;
		for (int j = 0; j < in2; j++) {
			cin >> in3 >> in4;
			G[in1].push_back({ in4, in3 });
		}
	}

	dijkstra(n,G,stpoint);

	return 0;
}
