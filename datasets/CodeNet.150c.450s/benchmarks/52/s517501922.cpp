#include <iostream>
#include <stack>
#include <queue>

int main() {
	std::stack<int> stCar;
	std::queue<int> qOut;
	int number;

	while (std::cin >> number) {
		if (number != 0) {
			stCar.push(number);
		} else {
			qOut.push(stCar.top());
			stCar.pop();
		}
	}

	while (!qOut.empty()) {
		std::cout << qOut.front() << '\n';
		qOut.pop();
	}
	return 0;
}