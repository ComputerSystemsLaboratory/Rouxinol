#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

int main(){
  double x1,y1,x2,y2,x3,y3,x,y;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x>>y){
    bool b=true;
    if(((y2-y1)*(x3-x1)-(x2-x1)*(y3-y1))*((y2-y1)*(x-x1)-(x2-x1)*(y-y1))<0) b=false;    
    if(((y3-y2)*(x1-x2)-(x3-x2)*(y1-y2))*((y3-y2)*(x-x2)-(x3-x2)*(y-y2))<0) b=false;
    if(((y1-y3)*(x2-x3)-(x1-x3)*(y2-y3))*((y1-y3)*(x-x3)-(x1-x3)*(y-y3))<0) b=false;
    if(b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  
  return 0;
}
