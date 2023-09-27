#include<iostream>
#include<vector>
#include<queue>

std::vector<int> to[100005];
const int INF = 1001001001;

int main() {
	int N, M;
	std::cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int A, B;
		std::cin >> A >> B;
		A--;
		B--;
		to[A].push_back(B);
		to[B].push_back(A);
	}

	std::queue<int> q;
	std::vector<int> dist(N, INF);
	std::vector<int> pre(N);

	q.push(0);
	dist[0] = 0;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int u : to[v]) {
			if (dist[u] != INF) continue;
			q.push(u);
			dist[u] = dist[v] + 1;
			pre[u] = v;
		}
	}

	std::cout << "Yes" << std::endl;
	for (int i = 1; i < N; i++) {
		int ans = pre[i] + 1;
		std::cout << ans << std::endl;
	}

	return 0;
}