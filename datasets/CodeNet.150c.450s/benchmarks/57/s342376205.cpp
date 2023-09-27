#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> split(const std::string& input, char delimiter) {
	std::istringstream stream(input);
	std::string field;
	std::vector<std::string> result;
	while (std::getline(stream, field, delimiter)) {
		result.push_back(field);
	}
	return result;
}

int str_to_int(const std::string& s) {
	std::istringstream iss(s);
	int n;
	iss >> n;
	return n;
}

int main(void) {
	for (std::string s; std::getline(std::cin, s);) {
		const std::vector<std::string> ts = split(s, ' ');
		const int a = str_to_int(ts[0]), b = str_to_int(ts[2]);
		const char op = ts[1][0];
		if (op == '+') {
			std::cout << (a + b) << std::endl;
		} else if (op == '+') {
			std::cout << (a + b) << std::endl;
		} else if (op == '-') {
			std::cout << (a - b) << std::endl;
		} else if (op == '*') {
			std::cout << (a * b) << std::endl;
		} else if (op == '/') {
			if (b != 0) {
				std::cout << (a / b) << std::endl;
			}
		} else if (op == '?') {
			break;
		}
	}
	return 0;
}