#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;



int main(){
  double a,b,c,d,e,f;
  double x,y;
  while(cin >> a >> b >>  c >>  d >>  e >>  f){
    x=(a*f-c*d)/(a*e-b*d);
    y=(c*e-f*b)/(a*e-b*d);
    if(x==0) x=0 ;
    if(y==0) y=0;
    printf("%.3lf %.3lf\n",y,x);
  }
}

