#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	double a,b,c,d,e,f,x,y;
	while(true){
		cin>>a>>b>>c>>d>>e>>f;
		if(cin.eof()) break;
		x=(b*f-c*e)/(b*d-a*e);
		y=(c-a*x)/b;
		x=round(x*1000.0)/1000.0;
		y=round(y*1000.0)/1000.0;
		if(x-0.0<0.001&&x-0.0>-0.001) x=0.0;
		if(y-0.0<0.001&&y-0.0>-0.001) y=0.0;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}