#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f;
	float x,y;
	while( cin>>a>>b>>c>>d>>e>>f ){
		x = (e*c-b*f)/(a*e-b*d);
		y = (a*f-d*c)/(a*e-b*d);
		if (x == 0) x = 0.000;
		if (y == 0) y = 0.000;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}