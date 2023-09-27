#include<iostream>
#include<algorithm>
#include <array>
int main(void){
	int W, H, x, y, r;
	std::cin >> W >> H >> x >> y >> r;
	if (x - r<0 || y - r<0 || x + r>W || y + r>H){
		std::cout << "No" << std::endl;
	}
	else{
		std::cout << "Yes" << std::endl;
	}
	return 0;
}