#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
     double a, b, c, d, e, f, x, y;
     while(cin >> a >> b >> c >> d >> e >> f){
     	if (a == 0)	y = c / b;
     	else{
	     	b /= a;
    	 	c /= a;
    	}
    	if(d == 0)	y = f / e;
     	else{
     		e /= d;
     		f /= d;
     	}
     	if(!(a == 0 || d == 0))	y = (c - f) / (b - e);
     	x = c - b * y;
     	printf("%.3f %.3f\n", x, y);
     }

	return 0;
}