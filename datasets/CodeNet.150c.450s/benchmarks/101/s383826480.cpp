#include <iostream>
#include <vector>
#include <stack>

int main() {
	// 入力
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> vec(n);
	std::vector<int> d(n, -1);
	std::stack<int>  s;

	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	// 連結成分分解
	for (int i = 0; i < n; i++) {
		if (d[i] != -1) continue;
		if (vec[i].size() == 0) continue;
		s.push(i);
		while(!s.empty()){
			int x = s.top();
			s.pop();
			for (int j = 0; j < vec[x].size(); j++) {
				if (d[vec[x][j]] == -1) {
					d[vec[x][j]] = i;
					s.push(vec[x][j]);
				}
			}
		}
	}

	int q;
	std::cin >> q;
	while (q--) {
		int a, b;
		std::cin >> a >> b;
		if (d[a] != -1 && d[b] != -1 && d[a] == d[b]) {
			std::cout << "yes" << std::endl;
		}
		else {
			std::cout << "no" << std::endl;
		}
	}
}
