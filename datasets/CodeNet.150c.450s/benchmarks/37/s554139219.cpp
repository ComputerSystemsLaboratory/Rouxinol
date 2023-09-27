#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map> // pair
#include <set>
#define MAXSIZE 200000
#define PI 3.141592653589
using namespace std;

template<typename T>
T add(T a,T b){
  return a+b;
}

namespace A
{
  int f(void){
    return 1;
  }
}

int main(){
  int a,b,c,d,e,f;
  while (std::cin >> a>>b>>c>>d>>e>>f) {
    double x=(1.0)*(b*f-c*e)/(b*d-a*e);
    double y=(1.0)*(c*d-a*f)/(b*d-a*e);
    if(x>-0.001&&x<0.001)x=0.000;
    if(y>-0.001&&y<0.001)y=0.000;
    printf("%.3f %.3f\n",x,y);
  }

}

