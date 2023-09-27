#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){

	double a,b,c,d,e,f;
	double x, y;

	while(cin >> a){
		cin >> b >> c >> d >> e >> f;

		if(c/b == f/e){
			x = 0;
			y = c/b;
			printf("%.3lf %.3lf\n",x, y);
		}else if(c/a == f/d){
			y = 0;
			x = c/a;
			printf("%.3lf %.3lf\n",x, y);
		}else{
			y = (c*d - a*f)/(d*b - a*e);
			x = (c - b*y)/a;
			printf("%.3lf %.3lf\n",x, y);
		}
	}
	return 0;
}