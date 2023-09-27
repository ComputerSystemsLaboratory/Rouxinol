#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  float a,b,c,d,e,f;
  float x,y;
  while(cin >> a >> b >> c >> d >> e >> f){
    y = (c*d-a*f) / (b*d-a*e);
    x = (c - b*y) /a;
    printf("%.3f %.3f\n",x,y);
  }
  return 0;
}