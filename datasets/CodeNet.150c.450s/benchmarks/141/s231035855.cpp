#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
bool pt(double px,double py,double qx,double qy,double rx,double ry,double sx,double sy){
  if(((rx-qx)*(py-qy)-(px-qx)*(ry-qy)<=0&&(sx-rx)*(py-ry)-(px-rx)*(sy-ry)<=0&&(qx-sx)*(py-sy)-(px-sx)*(qy-sy)<=0)||
     ((rx-qx)*(py-qy)-(px-qx)*(ry-qy)>=0&&(sx-rx)*(py-ry)-(px-rx)*(sy-ry)>=0&&(qx-sx)*(py-sy)-(px-sx)*(qy-sy)>=0))
    return 1;
  return 0;
}
int main(){
  double px,py,qx,qy,rx,ry,sx,sy;
  while(cin>>qx>>qy>>rx>>ry>>sx>>sy>>px>>py){
    if(pt(px,py,qx,qy,rx,ry,sx,sy))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}