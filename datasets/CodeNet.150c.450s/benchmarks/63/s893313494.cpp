#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX_N 150000
#define INF 1355135500
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
int d[MAX_N], col[MAX_N];
vector<pair<int, int>>x[MAX_N];
void dijkstra(int s) {
	for (int i = 0; i<MAX_N; i++) {
		d[i] = INF;
		col[i] = WHITE;
	}
	d[s] = 0;
	col[s] = GRAY;
	Q.push(make_pair(0, s));
	while (!Q.empty()) {
		pair<int, int>p = Q.top();
		col[p.second] = BLACK;
		Q.pop();
		for (int i = 0; i<x[p.second].size(); i++) {
			int a = x[p.second][i].first;
			int b = x[p.second][i].second;
			if (d[a]>d[p.second] + b && col[a] != BLACK) {
				d[a] = d[p.second] + b;
				col[a] = GRAY;
				Q.push(make_pair(d[a], a));
			}
		}
	}
}

int main() {
	int n, m, s, a, b, c;
	cin >> n >> m >> s;
	for (int i = 0; i<m; i++) {
		cin >> a >> b >> c;
		x[a].push_back(make_pair(b, c));
	}
	dijkstra(s);
	for (int i = 0; i<n; i++) {
		if (d[i] == INF) { cout << "INF" << endl; }
		else { cout << d[i] << endl; }
	}
	return 0;
}