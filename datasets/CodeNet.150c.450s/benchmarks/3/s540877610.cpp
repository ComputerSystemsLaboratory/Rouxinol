#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <fstream>

int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	std::string str;
	std::cin >> str;

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {

		std::string cmd;
		std::cin >> cmd;
		int st, ed;
		std::cin >> st >> ed;

		if (cmd == "print") {
			std::cout << str.substr(st, ed - st + 1) << std::endl;
		}
		else if (cmd == "reverse") {
			std::reverse(str.begin() + st, str.begin() + ed + 1);
		}
		else {
			std::string temp;
			std::cin >> temp;
			str.replace(st, ed - st + 1, temp);
		}

	}

}