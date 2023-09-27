#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
#include <map>
#include <queue>
#define _PI (3.141592653589793)
int main()
{
	int N, M;
	std::cin >> N >> M;
	std::multimap<int, int> toMap;
	for (int i = 0; i < M; ++i) {
		int A, B;
		std::cin >> A >> B;
		toMap.insert(std::multimap<int, int>::value_type(A, B));
		toMap.insert(std::multimap<int, int>::value_type(B, A));
	}
	std::map<int, int> answer;
	std::queue<int> queue;
	queue.push(1);
	while (!queue.empty()) {
		const int room_index = queue.front();
		queue.pop();
		auto range = toMap.equal_range(room_index);
		for (auto itr = range.first; itr != range.second; ++itr) {
			const int from = itr->second;
			if (from == 1) {
				continue;
			}
			auto itr2 = answer.find(from);
			if (itr2 == answer.end()) {
				answer.insert(std::map<int, int>::value_type(from,room_index));
				queue.push(from);
			}

		}
	}
	if (answer.size() == N - 1) {
		std::cout << "Yes" << std::endl;
		for (auto itr = answer.begin(); itr != answer.end(); ++itr) {
			std::cout << itr->second << std::endl;
		}
	}
	else {
		std::cout << "No" << std::endl;
	}
	return 0;
}