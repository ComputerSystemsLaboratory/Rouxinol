#include <iostream>
#include <vector>
#include <queue>

using namespace std;
const int INF = 1001001001;
vector<int> to[100005]; //行き先

int main(void) {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int A, B;
		cin >> A >> B;
		--A;
		--B; //部屋番号を1ずらす
		to[A].push_back(B);
		to[B].push_back(A);
	}
	//スタートからの深さ探索
	queue<int> q; //調べる予約リスト
	vector<int> dist(N, INF);
	vector<int> pre(N, -1);
	dist[0] = 0; 
	q.push(0);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int u : to[v]) { //部屋vにつながる部屋をすべて調べる
			if (dist[u] != INF) continue;
			dist[u] = dist[v] + 1;
			pre[u] = v;
			q.push(u);
		}
	}

	//道しるべ記入
	cout << "Yes" << endl;
	for (int i = 0; i < N; i++) {
		if (i == 0) continue;
		int ans = pre[i];
		++ans;
		cout << ans << endl;
	}
}