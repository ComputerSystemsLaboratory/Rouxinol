#include <iostream>
#include <queue>
#include <string>

int main() {

	int n, q;

	std::cin >> n >> q;

	std::queue<std::pair<std::string, int>> Q;

	for (int i = 0; i < n; ++i) {
		std::string s;
		int v;
		std::cin >> s >> v;

		Q.push(std::make_pair(s, v));
	}
	int time = 0;
	while (!Q.empty()) {
		if (Q.front().second <= q) {
			std::cout << Q.front().first << " " << Q.front().second + time << std::endl;
			time += Q.front().second;
			Q.pop();
		} else {
			Q.push(std::make_pair(Q.front().first, Q.front().second - q));
			time += q;
			Q.pop();
		}
	}

	return 0;
}