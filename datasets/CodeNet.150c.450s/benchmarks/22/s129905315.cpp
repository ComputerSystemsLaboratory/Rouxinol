#include<iostream>
#include<queue>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;

typedef pair<long long, int>P;

#define MAX_N 150000
#define INF 100000000000000
priority_queue<P, vector<P>, greater<P>>Q;
vector<pair<int, long long>>X[MAX_N];
int N, M, A, B, C, O;
long long dist[MAX_N];
void dijkstra() {
	for (int i = 0; i < MAX_N; i++) {
		dist[i] = INF;
	}
	Q.push(make_pair(0, O)); dist[O] = 0;
	int cnt = 0;
	while (!Q.empty()) {
		cnt++;
		if (cnt >= 8000000 || Q.size() >= 2000000) { cout << "NEGATIVE CYCLE" << endl; return; }
		P pa = Q.top(); Q.pop();
		long long a1 = pa.first; int a2 = pa.second;
		for (int i = 0; i < X[a2].size(); i++) {
			int to = X[a2][i].first;
			if (dist[to] > a1 + X[a2][i].second) {
				dist[to] = a1 + X[a2][i].second;
				Q.push(make_pair(dist[to], to));
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (dist[i] == INF) { cout << "INF" << endl; }
		else { cout << dist[i] << endl; }
	}
	return;
}
int main() {
	cin >> N >> M >> O;
	for (int i = 0; i < M; i++) {
		cin >> A >> B >> C;
		X[A].push_back(make_pair(B, C));
	}
	dijkstra();
	return 0;
}