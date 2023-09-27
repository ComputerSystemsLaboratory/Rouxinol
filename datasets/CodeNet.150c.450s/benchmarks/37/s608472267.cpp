#include <bits/stdc++.h>
using namespace std;

int main(void){
	float a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		float delta = -a*e+b*d;
		float y = (-a*f+c*d)/delta;
		float x = (c-b*y)/a;
		printf("%.3f %.3f\n",x,y);
	}
}