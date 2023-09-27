#include <iostream>
#include <sstream>
#include <stack>
#include <string>

void out(int n, int* a);

int main() {
	std::stack<int> s;
	std::string e;
	while (std::cin >> e) {
		if (e == "+") {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(b + a);
		} else if (e == "-") {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(b - a);
		} else if (e == "*") {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			s.push(b * a);
		} else {
			// s.push(std::stoi(e));
			std::stringstream ss;
			int d;
			ss << e;
			ss >> d;
			s.push(d);
		}
	}
	std::cout << s.top() << std::endl;
	return 0;
}