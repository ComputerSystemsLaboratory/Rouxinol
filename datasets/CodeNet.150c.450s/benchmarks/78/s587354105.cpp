//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

using uint = unsigned int;

const uint s = 1.E6;

uint ans[s];
uint ans_odd[s];

inline uint regularTetrahedronNum(uint n) {
	return n * (n + 1) * (n + 2) / 6;
}

inline void update(uint rt_num) {
	for (uint i = rt_num; i < s; i++) {
		ans[i] = min(ans[i], ans[i - rt_num] + 1);
	}
	if (rt_num % 2 == 0) {
		return;
	}
	for (uint i = rt_num; i < s; i++) {
		ans_odd[i] = min(ans_odd[i], ans_odd[i - rt_num] + 1);
	}
}

void print() {
	std::cout << "debug " << std::endl; // debug
	for (uint i = 0; i < s; i++) {
		cout << i << ": " << ans[i] << " " << ans_odd[i] << endl;
	}
}

int main() {
	for (uint i = 0; i < s; i++) {
		ans[i] = i;
		ans_odd[i] = i;
	}
	for (uint i = 2; i < s; i++ ) {
		auto num = regularTetrahedronNum(i);
		if (num > s) {
			break;
		}
		update(num);
	}

	//print();
	while (true) {
		uint tmp;
		cin >> tmp;
		if (tmp == 0) {
			break;
		}
		cout << ans[tmp] << " " << ans_odd[tmp] << endl;

	}

	//std::cout << "\e[38;5;0m\e[48;5;40m --- end ---  \e[m" << std::endl; // debug
	return 0;
}