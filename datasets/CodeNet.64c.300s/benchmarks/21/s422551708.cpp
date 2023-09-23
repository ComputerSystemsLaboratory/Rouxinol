#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  double a,b,c,d,e,f;
  while(cin>>a>>b>>c>>d>>e>>f){
    double matrix = 1/(a*e-b*d);
    double x = matrix*(e*c-b*f);
    double y = matrix*(a*f-d*c);
    if(x==-0.0) x=0.0;
    if(y==-0.0) y=0.0;
    printf("%4.3f %4.3f\n",x,y);
  }
}