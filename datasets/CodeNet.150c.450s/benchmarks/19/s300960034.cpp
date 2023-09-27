#include<iostream>
#include<vector>
#include<algorithm>
int main() {
	std::vector<int> a;
	std::vector<int> b;
	while (true) {
		int i, o;
		std::cin >> i >> o;
		if (i == 0 && o == 0) {
			break;
		}
		a.push_back(std::min(i, o));
		b.push_back(std::max(i, o));
	}
	for (int x = 0; x < a.size(); ++x) {
		std::cout << a[x] << " " << b[x] << std::endl;
	}
}