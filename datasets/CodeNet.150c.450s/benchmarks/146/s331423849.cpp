#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
#define INF 0x7FFFFFFF
const double EPS = 1e-10;

inline bool eq(double a, double b) { return fabs(b - a) < EPS; }

int main(){
  int n;
  cin>>n;
  while(n){
    n--;
    vector<double> x(4,0);
    vector<double> y(4,0);
    for(int i=0;i<4;i++){
      cin>>x[i]>>y[i];
    }
    double xa,xb,ya,yb;
    xa=x[1]-x[0];
    xb=x[3]-x[2];
    ya=y[1]-y[0];
    yb=y[3]-y[2];
    double a;
    a=xa*yb-xb*ya;
    if(eq(0.0,a)){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}

