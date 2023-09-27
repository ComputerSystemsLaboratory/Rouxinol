#include<iostream>
#include<vector>
#include<queue>
#include<functional>
#include<algorithm>
using namespace std;
#define INF 100000000000000000LL
#define MAX_N 500000
priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>>Q;
vector<pair<long long, long long>>X[MAX_N]; long long WHITE = 0, GRAY = 1, BLACK = 2;
long long COLOR[MAX_N], DIST[MAX_N], POINT[MAX_N], N, M, A, B, C;
long long classcal() {
	for (int i = 0; i < MAX_N; i++) { POINT[i] = INF; DIST[i] = INF; COLOR[i] = WHITE; }
	DIST[0] = 0; COLOR[0] = GRAY; Q.push(make_pair(0, 0));
	while (!Q.empty()) {
		pair<long long, long long>pa = Q.top(); Q.pop();
		long long a1 = pa.first, a2 = pa.second;
		COLOR[a2] = BLACK;
		for (int i = 0; i < X[a2].size(); i++) {
			long long to = X[a2][i].first, dist = X[a2][i].second;
			if (DIST[to] > dist && COLOR[to] < BLACK) {
				for (int j = 0; j < X[to].size(); j++) {
					if (X[to][j].first == a2) { POINT[to] = j; }
				}
				DIST[to] = dist; Q.push(make_pair(DIST[to], to));
			}
		}
	}
	long long sum = 0;
	for (int i = 0; i < N; i++) { if (POINT[i] < INF) { sum += X[i][POINT[i]].second; } }
	return sum;
}
int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) { cin >> A >> B >> C; X[A].push_back(make_pair(B, C)); X[B].push_back(make_pair(A, C)); }
	cout << classcal() << endl;
	return 0;
}