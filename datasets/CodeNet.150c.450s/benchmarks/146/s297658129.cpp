#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  double x1,y1,x2,y2,x3,y3,x4,y4;
  
  while(n--){
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(abs((y2-y1)*(x4-x3)-(x2-x1)*(y4-y3))<0.000000000001) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
    
  return 0;
}
