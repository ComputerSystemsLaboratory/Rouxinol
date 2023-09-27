#include <iostream>
#include <cmath>
     
int main() {
    int n;
    std::cin >> n;
    while(n--){
		double x1, y1, x2, y2, x3, y3, x4, y4;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		int ix1 = round(x1*100000), iy1 = round(y1*100000),
			ix2 = round(x2*100000), iy2 = round(y2*100000),
			ix3 = round(x3*100000), iy3 = round(y3*100000),
			ix4 = round(x4*100000), iy4 = round(y4*100000);
		int a = iy1 - iy2, b = ix2 - ix1, c = iy3 - iy4, d = ix4 - ix3;
		if(!((long long int)a*d - (long long int)b*c))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
		}
    return 0;
}