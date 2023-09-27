#include<iostream>
#include<stdio.h>

int main(){
  double a,b,c,d,e,f,x,y;

  while(std::cin >>a>>b>>c>>d>>e>>f){

    x = (double)(c*e-b*f)/(a*e-b*d);
    y = (double)(a*f-c*d)/(a*e-b*d);
    if(x == 0){x = 0;}
    if(y == 0){y = 0;}
    printf("%.3f %.3f\n",x,y);

  }
}