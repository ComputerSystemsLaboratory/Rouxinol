#include <iostream>

int main() {
	int w, h, x, y, r;
	
	std::cin >> w >> h >> x >> y >> r;
	
	if(w>=(x+r) && (x-r)>=0 && h>=(y+r) && (y-r)>=0) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
}