#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  double a,b,c,d,e,f;
  while(cin >> a >> b >> c >> d >> e >>f){
    double delta = a*e - d*b;
    double x = (1/delta)*(e*c+(-b)*f)+0;
    double y = (1/delta)*((-d)*c+a*f)+0;
    //cout << x << " " <<y << endl;
    printf("%4.3f %4.3f\n",x,y);
  }
}