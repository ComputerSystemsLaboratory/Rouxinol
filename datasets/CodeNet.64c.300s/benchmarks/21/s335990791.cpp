#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>
using namespace std;

double abs2(const double n){
	if (n < 0) return -(n);
	return n;
}

int main(){
	double a, b, c, d, e, f;
	double x, y;
	double A, B, C;
	const double p = 0.00000001;

	while (cin >> a >> b >> c >> d >> e >> f){
		A = (a*e) - (b*d);
		B = (c*e) - (b*f);
		C = (a*f) - (c*d);

		x = B / A;
		y = C / A;
		
		if (abs2(x) < p) x = 0;
		if (abs2(y) < p) y = 0;

		printf("%.3lf %.3lf\n", x, y);
	}
	
	return 0;
}