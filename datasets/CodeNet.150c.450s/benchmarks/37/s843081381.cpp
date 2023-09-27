#include<bits/stdc++.h>
using namespace std;
int main(){
  double a,b,c,d,e,f,a2,b2,c2,ansx,ansy; // ax+by=c  dx+ey=f
  while(cin >> a >> b >> c >> d >> e >> f){
    a2=a;
    b2=b;
    c2=c;

    a/=b; // (a/b)x+y=c
    c/=b; // (a/b)x+y=(c/b)
    a*=(-1); // y=(c/b)-(a/b)x
    c*=e; // dx+e(c)=f
    a*=e; // dx+e(c+ax)=f
    a+=d; // dx+(a*e)x+(c*e)=f
    f-=c; // dx+(a*e)x=f-(c*e)
    ansx=f/a;
    if(ansx > -0.0005 && ansx <= 0){
      printf("0.000 ");
    } else{
      printf("%.3f ",ansx);
    }
 
    a2*=ansx;
    c2-=a2;
    ansy=c2/b2;
    if(ansy >= -0.0005 && ansy <= 0){
      printf("0.000\n");
    } else{
      printf("%.3f\n",ansy);
    }
  }
  return 0;
}