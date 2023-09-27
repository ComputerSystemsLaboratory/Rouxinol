#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#define EPS 0.00000000001
using namespace std;

int main()
{
  double x1,x2,x3,x4,y1,y2,y3,y4;
  double dx1,dy1,dx2,dy2;
  int n;
  int i;

  cin>>n;
  for(i=0;i<n;i++){
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    dx1=x2-x1;
    dy1=y2-y1;
    dx2=x4-x3;
    dy2=y4-y3;

    if(abs(dx1)<EPS && abs(dx2)<EPS)
      cout<<"YES"<<endl;
    else if(abs(dx1)<EPS || abs(dx2)<EPS)
      cout<<"NO"<<endl;
    else if(abs(dy1/dx1-dy2/dx2) < EPS)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
}