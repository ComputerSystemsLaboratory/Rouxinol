#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h;
  cin>>h;
  
  int vec[260];
  for(int i=1;i<=h;i++) cin>>vec[i];
  
  for(int i=1;i<=h;i++){
    cout<<"node "<<i<<": key = "<<vec[i]<<", ";
    if(i/2>=1 && i/2<=h) cout<<"parent key = "<<vec[i/2]<<", ";
    if(i*2>=1 && i*2<=h) cout<<"left key = "<<vec[i*2]<<", ";
    if(i*2+1>=1 && i*2+1<=h) cout<<"right key = "<<vec[i*2+1]<<", ";
    cout<<endl;
  }
      
  return 0;
}
