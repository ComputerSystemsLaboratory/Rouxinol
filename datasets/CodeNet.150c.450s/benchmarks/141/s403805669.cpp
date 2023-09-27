#include <iostream>
using namespace std;

double outer_product(double x1, double y1, double x2, double y2){
	return x1 * y2 - x2 * y1;
}

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(std::cin >> x1){
		std::cin >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;
		bool dir = (outer_product(xp - x1, yp - y1, x2 - x1, y2 - y1) > 0);
		if ( dir == (outer_product(xp - x2, yp - y2, x3 - x2, y3 - y2) > 0) &&
			dir == (outer_product(xp - x3, yp - y3, x1 - x3, y1 - y3) > 0) ) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
	}
}