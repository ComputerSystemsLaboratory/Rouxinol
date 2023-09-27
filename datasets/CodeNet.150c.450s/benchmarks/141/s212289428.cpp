#include <iostream>
#include <utility>
using namespace std;

int main(){
  float x1,y1,x2,y2,x3,y3,xp,yp;
  float a1,b1,a2,b2,A,B;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
    a1=x2-x1;
    a2=y2-y1;
    b1=x3-x1;
    b2=y3-y1;
    xp=xp-x1;
    yp=yp-y1;
    A=(b1*yp-b2*xp)/(a2*b1-a1*b2);
    B=(a2*xp-a1*yp)/(a2*b1-a1*b2);
    if(A+B<1&&A>0&&B>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}