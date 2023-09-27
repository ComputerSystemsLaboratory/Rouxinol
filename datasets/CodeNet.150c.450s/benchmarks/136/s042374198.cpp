#include <iostream>			//std::cout, std::cin
#include <string>			//std::string,std::to_string(C++11)
#include <vector>			//std::vector
#include <valarray>			//std::valarray
#include <algorithm>		//std::sort
#include <ctime>			//localtime_s
#include <cstdlib>			//abs
#include <cmath>			//abs,std::pow,sqrt,sin,cos,round,floor,ceil
#include <fstream>			//std::ifstream,std::ofstream
#include <iomanip>			//std::setprecision,std::setw,std::setfill
#include <random>			//std::random(C++11)
#include <numeric>			//std::accumulate
#include <functional>		//std::greater
#include <chrono>			//std::chrono(C++11)
#include <bitset>			//std::bitset
#include <queue>			//std::queue

const static double	de_PI	= 3.14159265358979323846;
const static int	de_MOD	= 1000000007;
const static int	de_MAX	= 999999999;

unsigned long long Greatest_Common_Divisor(unsigned long long a, unsigned long long b) {

	while (a != 0 && b != 0) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return(a + b);
}

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());
	//std::ofstream ofs("456.csv");
	//std::chrono::system_clock::time_point t_st = std::chrono::system_clock::now();

	unsigned long long a = 0, b = 0;
	std::vector<unsigned long long> GCD,LCM;

	while (std::cin >> a) {
		std::cin >> b;
		GCD.push_back(Greatest_Common_Divisor(a, b));
		LCM.push_back(a*b / GCD.back());
	}

	for (unsigned int i = 0; i < GCD.size(); i++) {
		std::cout << GCD[i] << " " << LCM[i] << std::endl;
	}

	//std::chrono::system_clock::time_point t_ed = std::chrono::system_clock::now();
	//std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(t_ed - t_st).count() << "ms" << std::endl;

}