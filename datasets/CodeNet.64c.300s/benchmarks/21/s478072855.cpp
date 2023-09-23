#include<stdio.h>
#include<iostream>
int main() {
  double a,b,c,d,e,f;
  while(std::cin>>a>>b>>c>>d>>e>>f) {
    printf("%.3f %.3f\n",((c-(b*((a*f-c*d)/(a*e-b*d))))/a),(a*f-d*c)/(a*e-b*d));
  }
}