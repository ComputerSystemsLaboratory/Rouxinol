#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  double a, b, c, d, e, f, tmp;

  while(cin>>a>>b>>c>>d>>e>>f){
    tmp = d/a;
    e -= tmp*b;
    f -= tmp*c;

    f /= e;
    c -= b*f;
    c /= a;

    printf("%.3f %.3f\n", c, f);
  }
}