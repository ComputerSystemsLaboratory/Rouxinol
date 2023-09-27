#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
using namespace std;

void func(double, int);

int main(){

	double a, b, c, d, e, f, x, y, del;
	  
	while(cin >> a){
	
		cin >> b >> c >> d >> e >> f;
		
		del = a * e - b * d;
		x = (c * e - b * f) / del;
		y = (a * f - c * d) / del;
		
		func(x, -4);
		func(y, -4);
		
		if(x == 0) x = 0;
		if(y == 0) y = 0;
		
	  printf("%.3f %.3f\n", x, y);
	}

	return 0;
}

void func(double x, int n){
	
	x *= pow(10, -n-1);
	x = round(x);
	x *= pow(10, n+1);	

}