#include <iostream>
#include <utility>
#include <algorithm>

bool greaterfirst(std::pair<int, int> i, std::pair<int, int> j) { return (i.second > j.second); }

int main() {
	while (1) {
		// 入力
		int N, M;
		std::cin >> N >> M;
		if (N == 0 && M == 0) return 0;
		int D, P;
		std::pair<int, int> DP[10000];
		for (int i = 0; i < N; i++) {
			std::cin >> D >> P;
			DP[i] = std::make_pair(D, P);
		}
		// 演算
		std::sort(DP, DP + N, greaterfirst);
		int answer = 0;
		for (int i = 0; i < N; i++) {
			answer += DP[i].second * DP[i].first;
		}
		int remains = M;
		for (int i = 0; remains > 0 && i < N; i++) {
			if (remains >= DP[i].first	) {
				answer -= DP[i].second * DP[i].first;
			}
			else {
				answer -= DP[i].second * remains;
			}
			remains -= DP[i].first;
		}
		// 出力
		std::cout << answer << std::endl;
	}
	return 0;
}