#include<iostream>
#include<vector>

int main() {
	std::vector<int> v(2, 1);
	int num;

	std::cin >> num;

	while (v.size() < num + 1) {
		v.push_back((v.back()) + (v[v.size() - 2]));
	}

	std::cout << v.back() << std::endl;

	return 0;
}