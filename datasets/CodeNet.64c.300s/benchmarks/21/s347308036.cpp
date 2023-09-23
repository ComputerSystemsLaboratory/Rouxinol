#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	double a, b, c, d, e, f, x, y;
	
	while( scanf(" %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF ){
		if(b==0){
			x=c/a;
			y=(f-d*x)/e;
		}
		else{
			if(e==0){
				x=f/d;
				y=(c-a*x)/b;
			}
			else{
				x=(b*f-c*e)/(b*d-a*e);
				y=(c-a*x)/b;
			}
		}
		
		if(x==0) x=0;
		if(y==0) y=0;
	
		printf("%.3lf %.3lf\n", x, y);
	}

	return 0;
}