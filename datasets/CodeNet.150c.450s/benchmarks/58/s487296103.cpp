#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stack>

int main() {

	std::string str;
	std::getline(std::cin, str);

	std::istringstream iss(str);

	std::istream_iterator<std::string> it(iss);
	std::istream_iterator<std::string> last;

	std::stack<std::string> v;

	while (it != last) {
		std::string s = *it;

		if (s == "+") {
			int a = std::stoi(v.top());
			v.pop();
			int b = std::stoi(v.top());
			v.pop();

			v.push(std::to_string(a + b));

		} else if (s == "-") {
			int a = std::stoi(v.top());
			v.pop();
			int b = std::stoi(v.top());
			v.pop();

			v.push(std::to_string(b - a));

		} else if (s == "*") {
			int a = std::stoi(v.top());
			v.pop();
			int b = std::stoi(v.top());
			v.pop();

			v.push(std::to_string(a * b));

		} else {
			v.push(s);
		}
		++it;
	}
	std::cout << v.top() << std::endl;

	return 0;
}