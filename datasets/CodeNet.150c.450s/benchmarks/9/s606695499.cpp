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
	int m;
	int h;
	std::vector<std::string> ans;

	std::cin >> str;
	while (str != "-") {

		std::cin >> m;
		for (int i = 0; i < m; i++) {
			std::cin >> h;
			str += str.substr(0, h);
			str.erase(str.begin(), str.begin() + h);
		}
		ans.push_back(str);

		str.clear();
		std::cin >> str;
	}

	for (int i = 0; i < ans.size(); i++) {
		std::cout << ans[i] << std::endl;
	}

}