#include <iostream>
using namespace std;
int main(){
	double a,b,c,d,e,f,g;
	double x,y;
	while(cin>>a>>b>>c>>d>>e>>f){
		g=a*e-b*d;
		x=(c*e-b*f)/g;if(!x)x=0;
		y=(a*f-c*d)/g;if(!y)y=0;
		printf("%.3f %.3f\n",x,y);
	}
}