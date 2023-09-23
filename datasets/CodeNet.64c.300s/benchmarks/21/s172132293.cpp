#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int a, b, c, d, e, f;
	while(cin>>a>>b>>c>>d>>e>>f){
		double x, y;
		y = 1.0*(d*c-a*f)/(d*b-a*e);
		x = 1.0*(e*c-b*f)/(e*a-b*d);
		if(fabs(x)<0.0005) x = 0.0;
		if(fabs(y)<0.0005) y = 0.0;
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}