#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
  double a,b,c,d,e,f;
  while(cin>>a>>b>>c>>d>>e>>f){
  double p = a * e - b * d;
  double x = (e * c - b * f) / p;
  double y = (a * f - d * c) / p;
  if(0>=x&&x>=-0.0004)x=0;
  if(0>=y&&y>=-0.0004)y=0;
  printf("%.3f %.3f\n",x,y);
  }

}