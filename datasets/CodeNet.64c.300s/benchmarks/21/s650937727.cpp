#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double a,b,c,d,e,f;
	while(cin >> a >> b >> c >> d >> e >> f){
		double denom = a * e - b * d;
		double x = (c * e - b * f) / denom;
		double y = (a * f - c * d) / denom;
		if(x == 0) x = 0;
		if(y == 0) y = 0;
		printf("%.3lf ", x);
		printf("%.3lf\n", y);
	}
	return 0;
}