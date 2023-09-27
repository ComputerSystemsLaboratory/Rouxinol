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

	std::string W;
	std::cin >> W;
	std::transform(W.begin(), W.end(),W.begin(),tolower);

	int count = 0;
	std::string str;
	while (std::cin >> str) {
		if (W.length() == str.length()) {
			std::transform(str.begin(), str.end(), str.begin(), tolower);
			if (W == str) {
				count++;
			}
		}
	}

	std::cout << count << std::endl;

}