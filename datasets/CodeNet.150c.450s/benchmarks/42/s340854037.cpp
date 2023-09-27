#include <iostream>
#include <queue>
#include <map>
#include <string>

int main() {
	std::queue< std::pair<std::string, int> > queue;
	int n;
	int q;
	std::cin >> n >> q;
	for (int i = 0; i < n; i++) {
		std::string name;
		int time;
		std::cin >> name >> time;
		queue.push(std::make_pair(name, time));
	}
	// Round-Robin
	int t = 0;
	while (!queue.empty()) {
		std::pair<std::string, int> p = queue.front();
		queue.pop();
		if (p.second <= q) {
			t += p.second;
			std::cout << p.first << " " << t << std::endl;
		} else {
			t += q;
			p.second -= q;
			queue.push(p);
		}
	}
	return 0;
}