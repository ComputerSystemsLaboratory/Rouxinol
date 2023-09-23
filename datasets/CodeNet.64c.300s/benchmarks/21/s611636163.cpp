#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	
	double a,b,c,d,e,f,x,y;
	
	while(cin>>a>>b>>c>>d>>e>>f){
		printf("%.3f %.3f\n",floor((e*c-b*f)/(a*e-b*d)*1000+0.5)/1000,floor((a*f-c*d)/(a*e-b*d)*1000+0.5)/1000);		
	}
	
	return 0;
}