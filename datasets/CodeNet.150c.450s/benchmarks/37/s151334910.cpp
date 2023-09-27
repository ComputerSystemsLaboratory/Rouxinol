#include<iostream>
#define EPS 1e-10
using namespace std;


int main()
{

  int a,b,c,d,e,f;
  double x,y;

  while(cin >> a >> b >> c >> d >> e >> f){
    x = (double)(c*e - f*b) / (a*e - d*b) + EPS;
    y = (double)(c*d - f*a) / (b*d - e*a) + EPS;

    printf("%.3lf %.3lf\n",x,y);
   }

  return 0;
}