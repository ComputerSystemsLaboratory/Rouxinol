#define _USE_MATH_DEFINES	//M_PI
#include <iostream>			//std::cout, std::cin
#include <string>			//std::string
#include <vector>			//std::vector
#include <valarray>			//std::valarray	??°????????????????¬???????
#include <algorithm>		//std::sort
#include <time.h>			//localtime_s
#include <cstdlib>			//abs
#include <cmath>			//abs, pow, sqrt, sin, cos,
#include <fstream>			//std::ifstream
#include <iomanip>			//std::setprecision
#include <random>			//std::random

int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	int dice[6] = {};
	for (int i = 0; i < 6; i++) {
		std::cin >> dice[i];
	}

	int q = 0;
	std::cin >> q;
	std::vector<int> ans(q);

	for (int i = 0; i < q; i++) {

		int up, front;
		std::cin >> up >> front;

		std::random_device order;
		while (dice[0] != up || dice[1] != front) {
			int temp[6];
			if (order() % 2 == 0) {
				temp[0] = dice[3];
				temp[1] = dice[1];
				temp[2] = dice[0];
				temp[3] = dice[5];
				temp[4] = dice[4];
				temp[5] = dice[2];
				for (int j = 0; j < 6; j++) {
					dice[j] = temp[j];
				}
			}
			else {
				temp[0] = dice[1];
				temp[1] = dice[5];
				temp[2] = dice[2];
				temp[3] = dice[3];
				temp[4] = dice[0];
				temp[5] = dice[4];
				for (int j = 0; j < 6; j++) {
					dice[j] = temp[j];
				}
			}
		}
		ans[i] = dice[2];
	}

	for (int i = 0; i < q; i++) {
		std::cout << ans[i] << std::endl;
	}

}