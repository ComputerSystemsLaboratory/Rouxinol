#include<iostream>
using namespace std;

int main(){
  double x1,y1,x2,y2,x3,y3,xp,yp,xp_,yp_;
  double c,d,a1x,a1y,a2x,a2y;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
    // cout <<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<" "<<xp<<" "<<yp;
    a1x=x2-x1;
    a1y=y2-y1;
    a2x=x3-x1;
    a2y=y3-y1;
    xp_=xp-x1;
    yp_=yp-y1;
    // cout <<a1x<<a1y<<a2x<<a2y<<xp_<<yp_<<endl;
    c = (xp_*a2y-yp_*a2x)/(a1x*a2y-a2x*a1y);
    d = (-xp_*a1y+yp_*a1x)/(a1x*a2y-a2x*a1y);
    // cout <<"C: "<<c<<",D: "<<d<<endl;
    if (c<0){cout<<"NO"<<endl;continue;}
    if (d<0){cout<<"NO"<<endl;continue;}
    if ((c+d)>1){cout<<"NO"<<endl;continue;}
    cout <<"YES"<<endl;
  }
  return 0;
}

