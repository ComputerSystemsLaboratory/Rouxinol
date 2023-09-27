#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>

int main() {
	int w, n;
	std::cin >> w >> n;

	std::vector<int> state(w);
	for (int i = 0; i < w; ++i)
		state[i] = i + 1;

	for (int i = 0; i < n; ++i) {
		int a, b;
		std::scanf("%d,%d", &a, &b);

		std::swap(state[a - 1], state[b - 1]);
	}

	for (auto&& v : state)
		std::cout << v << std::endl;
}