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
const static int	de_MIN = -999999999;

void BubbleSort(std::vector<std::string> &A) {

	for (unsigned int i = 0; i < A.size(); i++) {
		for (unsigned int j = A.size() - 1; j >= i + 1; j--) {
			if (A[j][1] < A[j - 1][1]) {
				std::swap(A[j], A[j - 1]);
			}
		}
	}

}
void Display(std::vector<std::string> &A) {

	for (unsigned int i = 0; i < A.size(); i++) {
		std::cout << A[i];
		if (i != A.size() - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

}
void Check_Stability(std::vector<std::string> &A, std::vector<std::string> &B) {

	bool flg = true;
	for (unsigned int i = 0; i < A.size() - 1; i++) {
		if (B[i][1] == B[i + 1][1]) {
			auto itr_st = std::find(A.begin(), A.end(), B[i]);
			auto itr_ed = std::find(A.begin(), A.end(), B[i + 1]);
			if (itr_ed < itr_st) {
				flg = false;
				break;
			}
		}
	}
	if (flg) {
		std::cout << "Stable" << std::endl;
	}
	else {
		std::cout << "Not stable" << std::endl;
	}
}
void SelectionSort(std::vector<std::string> &A) {

	for (unsigned int i = 0; i < A.size(); i++) {
		unsigned int mini = i;
		for (unsigned int j = i; j < A.size(); j++) {
			if (A[j][1] < A[mini][1]) {
				mini = j;
			}
		}
		std::swap(A[i], A[mini]);
	}
}
int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());
	//std::ofstream ofs("456.csv");
	//std::chrono::system_clock::time_point t_st = std::chrono::system_clock::now();

	int N = 0;
	std::cin >> N;
	std::vector<std::string> temp(N), A(N), B(N);
	for (int i = 0; i < N; i++) {
		std::cin >> temp[i];
		A[i] = B[i] = temp[i];
	}

	BubbleSort(A);
	Display(A);
	Check_Stability(temp, A);

	SelectionSort(B);
	Display(B);
	Check_Stability(temp, B);

	//std::chrono::system_clock::time_point t_ed = std::chrono::system_clock::now();
	//std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(t_ed - t_st).count() << "ms" << std::endl;

}