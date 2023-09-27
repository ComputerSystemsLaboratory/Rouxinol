#include<iostream>
using namespace std;
int main(){
double a,b,c,d,e,f;
double x1,y1,x2,y2,x3,y3,xp,yp;
while(cin>>x1){
cin>>y1>>x2>>y2>>x3>>y3>>xp>>yp;
x1-=x3;y1-=y3;x2-=x3;y2-=y3;xp-=x3;yp-=y3;
if((a=x1*y2-x2*y1)>0)b=1;else b=-1;
if((c=b*(x1*yp-xp*y1))<0){cout<<"NO"<<endl;continue;}
if((d=b*(xp*y2-x2*yp))<0){cout<<"NO"<<endl;continue;}
if(c+d>a*b)cout<<"NO"<<endl;else cout<<"YES"<<endl;
}
return 0;
}