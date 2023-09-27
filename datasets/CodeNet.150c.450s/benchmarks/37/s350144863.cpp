#include <iostream>
#include <iomanip>
#include <cmath>
//#include <fstream>

int main(int argc, char **argv){
	//std::ifstream ifs("test.txt");
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;
	double f = 0;

	while(std::cin >> a >> b >> c >> d >> e >> f){
	//while(ifs >> a >> b >> c >> d >> e >> f){
		double det = a * e - b * d;
		double x = (c * e - b * f) / det;
		double y = (a * f - c * d) / det;
		
		x = std::round(x * 1000) / 1000.0;
		y = std::round(y * 1000) / 1000.0;

		if(x == - 0){ x = 0; }
		if(y == - 0){ y = 0; }
		std::cout << std::fixed << std::setprecision(3) << x << " " << y << std::endl;
	}
	return 0;
}