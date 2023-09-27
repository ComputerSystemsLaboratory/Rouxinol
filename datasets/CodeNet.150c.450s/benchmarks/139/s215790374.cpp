#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const long long int INF = 1000000007;
struct Edge {
	long long vir1;
	long long vir2;
};
void BFS(vector<vector<long long>>&Graph, vector<long long>&Dis, vector<long long>&Point) {
	queue<long long>Q;
	Q.push(0);
	Dis.at(0) = 0;
	Point.at(0) = 0;
	while (!Q.empty()) {
		long long v = Q.front();
		Q.pop();
		for (auto next_v : Graph[v]) {
			if (Dis.at(next_v) != INF) continue;
			Dis.at(next_v) = Dis.at(v) + 1;
			Point.at(next_v) = v;
			Q.push(next_v);
		}
	}
}
int main() {
	long long N, M; cin >> N >> M;
	vector<Edge>A(M);
	vector<vector<long long>>Graph(N);
	for (long long i = 0; i < M; i++) {
		cin >> A.at(i).vir1 >> A.at(i).vir2;
		Graph.at(A.at(i).vir1 - 1).push_back(A.at(i).vir2 - 1);
		Graph.at(A.at(i).vir2 - 1).push_back(A.at(i).vir1 - 1);
	}
	vector<long long>Dis(N, INF), Point(N, INF);
	BFS(Graph, Dis, Point);

	for (long long i = 0; i < N; i++) {
		if (Dis.at(i) == INF) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	for (long long i = 1; i < N; i++) {
		cout << Point.at(i)  + 1 << endl;
	}
}