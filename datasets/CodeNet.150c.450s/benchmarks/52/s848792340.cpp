#include <iostream>
#include <stack>

int main() {
	std::stack<int> istack;
	int n;
	while (std::cin >> n) {
		if (n > 0) {
			istack.push(n);
		} else {
			std::cout << istack.top() << std::endl;
			istack.pop();
		}
	}
	return 0;
}
