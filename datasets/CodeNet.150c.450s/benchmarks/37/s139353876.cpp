#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
 double a,b,c,d,e,f,y,x;
 int i=0,n;
while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f) != EOF){
  y=((c*d)-(a*f))/((b*d)-(a*e));
  x=((c*e)-(b*f))/((a*e)-(b*d));
  if(x == 0){x = 0;}
  if(y == 0){y = 0;}
  printf("%.3lf %.3lf\n", x,y);
  }
  return 0;
}