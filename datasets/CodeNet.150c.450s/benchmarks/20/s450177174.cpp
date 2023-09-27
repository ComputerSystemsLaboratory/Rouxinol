#include <iostream>
using namespace std;

int main() {
	int sec,min,hour;
	std::cin >> sec;
	hour = sec / 3600; //hour
	int tmp = sec - hour * 3600;
	min = tmp / 60;
	sec = tmp - min * 60;
	std::cout << hour << ":" << min << ":" << sec << std::endl;
	return 0;
}