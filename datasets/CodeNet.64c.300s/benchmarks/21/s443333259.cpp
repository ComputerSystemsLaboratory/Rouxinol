#include <iostream>
#include <cstdio>
int main(){
double a,b,c,d,e,f,x,y;
while(std::cin>>a>>b>>c>>d>>e>>f){
x=(b*f-c*e)/(b*d-a*e);
y=(f*a-d*c)/(a*e-b*d);
printf("%.3f %.3f\n",x==-0?0:x, y==-0?0:y);
}
}