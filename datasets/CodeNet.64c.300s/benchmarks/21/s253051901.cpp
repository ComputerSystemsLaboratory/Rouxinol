#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  double a,b,c,d,e,f;
  while(cin>>a){
    cin>>b>>c>>d>>e>>f;
    double x=(c*e-b*f)/(a*e-b*d);
    double y=(a*f-c*d)/(a*e-b*d);
    if(x==0)x=0;
    if(y==0)y=0;
    printf("%.3f %.3f\n",x,y);
  }
}

    
    /*
      ey=f-dx
      y=(f-dx)/e
      ax+b(f-dx)/e=c
      aex+df-bdx=ce
      (ae-bd)x=ce-df
      x=(ce-df)/(ae-bd)

  y=(f-dx)/e
  y=(f



a b  x  c
d e  y  f

x  c  e -b
y  f  -d a  /(ae-bd)*/