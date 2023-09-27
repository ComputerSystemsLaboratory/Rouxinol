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
#include <random>			//std::random(C++11)

int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	std::vector<int> dice1(6);//, dice2(6);
	for (int i = 0; i < 6; i++) {
		std::cin >> dice1[i];
	}

	//for (int i = 0; i < 6; i++) {
	//	std::cin >> dice2[i];
	//}
	int q, up, front;
	std::cin >> q >> up >> front;
	std::vector<int> ans(q);

	int count = 0;
	std::vector<int> temp(6);
	//while (count < 16 && ((dice1[0] != dice2[0] || dice1[1] != dice2[1]))) {
	for (int i = 0; i < q; i++) {
		count = 0;
		while (count < 16 && ((dice1[0] != up || dice1[1] != front))) {

			//??±
			temp[0] = dice1[3];
			temp[1] = dice1[1];
			temp[2] = dice1[0];
			temp[3] = dice1[5];
			temp[4] = dice1[4];
			temp[5] = dice1[2];
			dice1 = temp;

			if (count != 0 && count % 4 == 0) {
				//???
				temp[0] = dice1[1];
				temp[1] = dice1[5];
				temp[2] = dice1[2];
				temp[3] = dice1[3];
				temp[4] = dice1[0];
				temp[5] = dice1[4];
				dice1 = temp;
			}

			count++;
		}

		ans[i] = dice1[2];
		std::cin >> up >> front;
	}

	for (int i = 0; i < q; i++) {
		std::cout << ans[i] << std::endl;
	}
}