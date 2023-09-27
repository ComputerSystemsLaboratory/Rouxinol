#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a,b,c,d,e,f;
	float x , y , delta;

	while(cin >> a >> b >> c >> d >> e >> f){
			delta = (a * e) - (b * d);

			x = ((c * e) - (b * f)) / delta;
			y = ((a * f) - (c * d)) / delta;

			if(x == 0) x = 0;
			if(y == 0) y = 0;

		printf("%.3f %.3f\n", x , y);
	}

	return 0;
}