#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

int main() {
	int n, query_num;

	std::cin >> n >> query_num;

	std::vector<std::pair<int, int> > v;
	for (int i = 0; i < n; i++) {
		v.push_back(std::make_pair(i, i));
	}

	for (int i = 0; i < query_num; i++) {
		int query, a, b;
		std::cin >> query >> a >> b;
		if (query == 0) {//unite
			int num = v[b].second;
			for (size_t j = 0; j < v.size(); j++) {
				if (v[j].second == num) {
					v[j].second = v[a].second;
				}
			}
		} else {//same
			if (v[a].second == v[b].second) {
				std::cout << 1 << std::endl;
			} else {
				std::cout << 0 << std::endl;
			}
		}
	}
	return 0;
}