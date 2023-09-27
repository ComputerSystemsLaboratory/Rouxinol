#include <iostream>
#include <vector>
#include <queue>

int main() {
	int n;
	std::cin >> n;

	std::vector<std::vector<int>> edges(n);
	for (auto&& v : edges) {
		int k;
		std::cin >> k >> k;

		for (int i = 0; i < k; ++i) {
			int u;
			std::cin >> u;
			--u;

			v.push_back(u);
		}
	}

	std::vector<int> depth(n, -1);
	depth[0] = 0;

	std::queue<int> que;
	que.push(0);
	while (!que.empty()) {
		int cur = que.front();
		que.pop();

		for (auto&& dist : edges[cur]) {
			if (depth[dist] == -1) {
				depth[dist] = depth[cur] + 1;
				que.push(dist);
			}
		}
	}

	for (int i = 0; i < n; ++i)
		std::cout << i + 1 << " " << depth[i] << std::endl;
}
