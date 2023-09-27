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

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());
	//std::ofstream ofs("456.csv");
	//std::chrono::system_clock::time_point t_st = std::chrono::system_clock::now();

	std::string str;
	std::cin >> str;

	for (int i = str.length() - 1; i >= 0; i--) {
		std::cout << str[i];
	}
	std::cout << std::endl;

	//std::chrono::system_clock::time_point t_ed = std::chrono::system_clock::now();
	//std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(t_ed - t_st).count() << "ms" << std::endl;

}