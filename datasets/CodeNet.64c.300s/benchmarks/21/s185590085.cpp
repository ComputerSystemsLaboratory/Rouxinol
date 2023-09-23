#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  for(double a1,b1,c1,d1,e1,f1,b2,c2,e2,f2,a3,c3,d3,f3,x,y;cin>>a1>>b1>>c1>>d1>>e1>>f1;){

    b2=b1*d1;
    c2=c1*d1;

    e2=a1*e1;
    f2=a1*f1;

    y=(c2-f2)/(b2-e2);
    if(y==-0.000){
      y=0.000;
    }

    a3=a1*e1;
    c3=c1*e1;

    d3=b1*d1;
    f3=b1*f1;

    x=(c3-f3)/(a3-d3);
    if(x==-0.000){
      x=0.000;
    }

    cout<<fixed<<setprecision(3)<<x;
    cout<<" ";
    cout<<fixed<<setprecision(3)<<y<<endl;
  }
  return 0;
}