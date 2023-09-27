#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

void color(std::vector<std::vector<int> > n) {
	std::vector<int> color(n.size(), 0);
	std::stack<int> s;

	int count = 1;
	for (size_t i = 0; i < n.size(); i++) {
		if (color[i] != 0) continue;
		color[i] = count;
		s.push(i);
		while (s.size() != 0) {
			int num = s.top(); s.pop();
			for (std::vector<int>::iterator it = n[num].begin(); it != n[num].end(); it++) {
				if (color[*it] == 0) {
					s.push(*it);
					color[*it] = count;
				}
			}
		}
		count++;
	}

	int question;
	std::cin >> question;
	for (int i = 0; i < question; i++) {
		int from, to;
		std::cin >> from >> to;
		if (color[from] == color[to]) {
			std::cout << "yes" << std::endl;
		} else {
			std::cout << "no" << std::endl;
		}
	}

}

int main() {
	int people, relation;

	std::cin >> people >> relation;

	std::vector<std::vector<int> > n(people);

	for (int i = 0; i < relation; i++) {
		int from, to;
		std::cin >> from >> to;
		n[from].push_back(to);
		n[to].push_back(from);
	}

	color(n);

	return 0;
}