#include<bits/stdc++.h>
using namespace std;

typedef struct{

  double x,y;
}vec_t;

int main(){

  double x1,y1,x2,y2,x3,y3,xp,yp;
  vec_t AB,BC,CA,AP,BP,CP;

  while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){

    AB.x=x2-x1 , AB.y=y2-y1;
    BC.x=x3-x2 , BC.y=y3-y2;
    CA.x=x1-x3 , CA.y=y1-y3;
    AP.x=xp-x1 , AP.y=yp-y1;
    BP.x=xp-x2 , BP.y=yp-y2;
    CP.x=xp-x3 , CP.y=yp-y3;

    double c1=AB.x*BP.y - AB.y*BP.x;
    double c2=BC.x*CP.y - BC.y*CP.x;
    double c3=CA.x*AP.y - CA.y*AP.x;

    if((c1<0&&c2<0&&c3<0) || (c1>0&&c2>0&&c3>0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

  return 0;
}