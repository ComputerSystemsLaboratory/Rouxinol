#include <iostream>
using namespace std;

int main() {
	int width,height,x,y,r;
	std::cin >> width;
	std::cin >> height;
	std::cin >> x;
	std::cin >> y;
	std::cin >> r;
	
	if(0 <= x - r  && x + r <= width && 0 <= y - r && y + r <= height) {
		std::cout << "Yes" << std::endl;
	}else {
		std::cout << "No" << std::endl;
	}
	return 0;
}