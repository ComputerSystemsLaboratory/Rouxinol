#include <iostream>
#include <cmath>

int main (){
	int h,m,s;

	std::cin >> s;
	std::cout << s/3600 << ":" << (s/60 - s/3600*60) << ":" << s%60 << std::endl; 
	return 0;
}

