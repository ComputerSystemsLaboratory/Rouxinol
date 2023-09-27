#include <iostream>
#include <cstdio>
int main(){
double a,b,c,d,e,f,x,y;
while(std::cin>>a>>b>>c>>d>>e>>f){
	x = (double)(b*f-c*e)/(b*d-a*e);
	y = (double)(f*a-d*c)/(a*e-b*d);
	printf("%.3f %.3f\n",x==-0.000?0.000:x, y==-0.000?0.000:y);
}
}