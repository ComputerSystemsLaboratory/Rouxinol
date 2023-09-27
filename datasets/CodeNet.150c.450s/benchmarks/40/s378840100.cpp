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

int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	int dice[6] = {};
	for (int i = 0; i < 6; i++) {
		std::cin >> dice[i];
	}

	int temp[6] = {};

	std::string order;
	std::cin >> order;
	for (int i = 0; i < order.length(); i++) {
		switch (order[i]) {
		case 'E':
			temp[0] = dice[3];
			temp[1] = dice[1];
			temp[2] = dice[0];
			temp[3] = dice[5];
			temp[4] = dice[4];
			temp[5] = dice[2];
			for (int j = 0; j < 6; j++) {
				dice[j] = temp[j];
			}
			break;
		case 'N':
			temp[0] = dice[1];
			temp[1] = dice[5];
			temp[2] = dice[2];
			temp[3] = dice[3];
			temp[4] = dice[0];
			temp[5] = dice[4];
			for (int j = 0; j < 6; j++) {
				dice[j] = temp[j];
			}
			break;
		case 'S':
			temp[0] = dice[4];
			temp[1] = dice[0];
			temp[2] = dice[2];
			temp[3] = dice[3];
			temp[4] = dice[5];
			temp[5] = dice[1];
			for (int j = 0; j < 6; j++) {
				dice[j] = temp[j];
			}
			break;
		case 'W':
			temp[0] = dice[2];
			temp[1] = dice[1];
			temp[2] = dice[5];
			temp[3] = dice[0];
			temp[4] = dice[4];
			temp[5] = dice[3];
			for (int j = 0; j < 6; j++) {
				dice[j] = temp[j];
			}
			break;
		default:;
		}
	}
	std::cout << dice[0] << std::endl;

}