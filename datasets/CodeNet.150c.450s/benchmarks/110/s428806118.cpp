#include <iostream>
#include <queue>
#include <unordered_map>
#include <utility>
#include <array>
#include <cstring>

bool isObstacle[1000][1000];
bool done[1000][1000];

int main() {
	int h, w, n;
	std::cin >> h >> w >> n;

	std::unordered_map<int, int> factories;

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			char c;
			std::cin >> c;

			if (c == 'S')
				factories[0] = j * 1000 + i;
			else if ('1' <= c && c <= '9')
				factories[c - '0'] = j * 1000 + i;
			else if (c == 'X')
				isObstacle[j][i] = true;
		}
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		const int sx = factories[i] / 1000, sy = factories[i] % 1000;
		const int gx = factories[i + 1] / 1000, gy = factories[i + 1] % 1000;

		std::memset(done, 0, sizeof(done));

		done[sx][sy] = true;

		auto candidate = [h, w](int x, int y) {
			std::array<int, 4> arr;
			arr[0] = ((x == 0 || isObstacle[x - 1][y] || done[x - 1][y]) ? -1 : (done[x - 1][y] = true, (x - 1) * 1000 + y));
			arr[1] = ((x == w - 1 || isObstacle[x + 1][y] || done[x + 1][y]) ? -1 : (done[x + 1][y] = true, (x + 1) * 1000 + y));
			arr[2] = ((y == 0 || isObstacle[x][y - 1] || done[x][y - 1]) ? -1 : (done[x][y - 1] = true, x * 1000 + y - 1));
			arr[3] = ((y == h - 1 || isObstacle[x][y + 1] || done[x][y + 1]) ? -1 : (done[x][y + 1] = true, x * 1000 + y + 1));

			return std::move(arr);
		};

		std::queue<std::pair<int, int>> q;
		q.push({ factories[i], 0 });
		while (!q.empty()) {
			const auto& top = q.front();
			const int nx = top.first / 1000, ny = top.first % 1000;
			int cost = top.second;

			auto&& c = candidate(nx, ny);
			for (auto v : c) {
				if (v != -1) {
					if (v / 1000 == gx && v % 1000 == gy) {
						ans += cost + 1;
						q.pop();
						goto end;
					}
					q.push({ v, cost + 1 });
				}
			}

			q.pop();
		}
	end:;
	}

	std::cout << ans << std::endl;
}