#include <iostream>
#include <stack>
#include <vector>
using namespace std;
static const int MAX = 100000;
static const int NIL = -1;

int N;
vector<int> G[MAX];
int color[MAX];
void dfs(int R, int C) {
	stack<int> S;
	S.push(R);
	color[R] = C;
	while (!S.empty()) {
		int U = S.top(); S.pop();
		for (int i = 0; i < G[U].size(); i++) {
			int V = G[U][i];
			if (color[V] == NIL) {
				color[V] = C;
				S.push(V);
			}
		}
	}
}
void assignColor() {
	int id = 1;
	for (int i = 0; i < N; i++) color[i] = NIL;
	for (int u = 0; u < N; u++) {
		if (color[u] == NIL) dfs(u, id++);
	}
}
int main() {
	int S, T, M, Q;

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> S >> T;
		G[S].push_back(T);
		G[T].push_back(S);
	}
	
	assignColor();
	cin >> Q;

	for (int i = 0; i < Q; i++) {
		cin >> S >> T;
		if (color[S] == color[T]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}
