#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
double a,b,c,d,e,f;
double x,y;
while(cin >> a >> b >> c >> d >> e >> f){
  x = (double)((e*c-b*f) / (a*e-b*d));
  y = (double)((-(d*c)+a*f) / (a*e-b*d));
  if(x == 0){x = 0;}
  if(y == 0){y = 0;}
  printf("%.3f %.3f\n",x,y);
 }
}