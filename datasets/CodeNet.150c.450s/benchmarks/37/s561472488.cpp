#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	double a, b, c, d, e, f, x, y;
	
	while(cin >> a >> b >> c >> d >> e >> f){
		y = (c*d - a*f) / (b*d - a*e);
		x = (c - b*y) / a;
		
		if(x == -0)
		x = 0;
		if(y == -0)
		y = 0;
		
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}