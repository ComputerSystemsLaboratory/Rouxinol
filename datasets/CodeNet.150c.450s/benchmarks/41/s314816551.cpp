#include<iostream>
#include<queue>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;

typedef pair<long long, long long> P;
#define MAX_N 1000
#define INF 1000000000000000LL

vector<P>X[MAX_N];
priority_queue<P, vector<P>, greater<P>>Q;
long long dist[MAX_N];
long long N, M, A, B, C;

int solve(int P) {
	while (!Q.empty()) { Q.pop(); }
	for (int i = 0; i < MAX_N; i++) { dist[i] = INF; }
	dist[P] = 0; Q.push(make_pair(0, P)); int cnt = 0;
	while (!Q.empty()) {
		cnt++;
		if (cnt >= 500000) { return 1; }
		pair<long long,long long> pa = Q.top(); Q.pop();
		long long a1 = pa.first, a2 = pa.second;
		for (int i = 0; i < X[a2].size(); i++) {
			long long to = X[a2][i].first;
			if (dist[to] > a1 + X[a2][i].second) {
				dist[to] = a1 + X[a2][i].second;
				Q.push(make_pair(dist[to], to));
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (i >= 1) { cout << ' '; }
		if (dist[i] == INF) { cout << "INF"; }
		else { cout << dist[i]; }
	}
	cout << endl;
	return 0;
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) { cin >> A >> B >> C; X[A].push_back(make_pair(B, C)); }
	for (int i = 0; i < N; i++) {
		int B = solve(i); if (B == 1) { cout << "NEGATIVE CYCLE" << endl; return 0; }
	}
	return 0;
}