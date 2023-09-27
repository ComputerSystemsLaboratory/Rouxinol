#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

// 5^12
// 0 -
// 1 A
// 2 G
// 3 C
// 4 T

// AAA = 1 * 4^0 + 1 * 4^1 + 1 * 4^3
// data[x] == 0 : none
// data[x] == 1 : found

int encode_ch(char ch) {
	switch (ch) {
	case 'A': return 1;
	case 'G': return 2;
	case 'C': return 3;
	case 'T': return 4;
	default: return 0;
	}
}

int encode(std::string str) {
	int x = 0;
	for (int i = 0; i < str.size(); i++) {
		x += encode_ch(str[str.size() - 1 - i]) * std::pow(4, i);
	}
	return x;
}

int main() {

	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	
	std::vector<bool> d;
	d.resize(244140625, false);//5^12 = 244140625

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::string op;
		std::string w;
		std::cin >> op >> w;

		if (op == "insert") {
			d[encode(w)] = true;
		}
		else if (op == "find") {
			std::cout << (d[encode(w)] ? "yes" : "no") << std::endl;
		}
	}
	return 0;
}