#include<iostream>
#include<list>

int main() {
	std::list<int> cars;
	int n;
	while (std::cin >> n) {
		if (n != 0) {
			cars.push_back(n);
		}
		else {
			std::cout << cars.back() << std::endl;
			cars.pop_back();
		}
	}
	return 0;
}