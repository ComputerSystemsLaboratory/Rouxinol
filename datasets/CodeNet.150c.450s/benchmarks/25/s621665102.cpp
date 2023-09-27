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
	std::string temp;
	while (std::cin >> temp) {
		str += temp;
	}

	std::vector<int> ans(26);
	char a = 'a';
	for (int i = 0; i < 26; i++) {

		ans[i] += std::count(str.begin(), str.end(), 'A' + i);
		ans[i] += std::count(str.begin(), str.end(), 'a' + i);

		std::cout << a << " : " << ans[i] << std::endl;
		a++;
	}

}