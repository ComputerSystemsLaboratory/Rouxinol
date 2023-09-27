#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	 double a, b, c, d, e, f, x, y;
	 while(cin >> a >> b >> c >> d >> e >> f){
	 	x = (b * f - c * e) / (b * d - a * e) + 0.0001;
	 	y = (a * f - d * c) / (a * e - b * d) + 0.0001;
	 	printf("%.3f %.3f\n", x, y);
	 }
}