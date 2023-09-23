#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	double a, b, c, d, e, f, A ,B, C, x, y;
	while(cin >> a >> b >> c >> d >> e >> f){
		A=a*e-b*d;
		B=c*d-a*f;
		C=c*e-b*f;
		x=C/A;
		y=(-1)*B/A;
		if(x== -0) x=0;
		if(y== -0) y=0;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}