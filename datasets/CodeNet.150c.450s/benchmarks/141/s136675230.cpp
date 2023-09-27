#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  double x1,y1,x2,y2,x3,y3,xp,yp;
  while(cin >>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
    double a2,b2,a3,b3,ap,bp,s,t;
    a2=x2-x1; b2=y2-y1; a3=x3-x1; b3=y3-y1; ap=xp-x1; bp=yp-y1;
    s=(b3*ap-a3*bp)/(a2*b3-a3*b2);
    t=(-b2*ap+a2*bp)/(a2*b3-a3*b2);
    if(0.0<s+t && s+t<1.0 && 0.0<s && 0.0<t)
      cout << "YES\n";
    else
      cout <<"NO\n";
  }
  return 0;
}