#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

ll calc(ll i){
  if(i==1) return 1;
  
  return i*calc(i-1);
}


int main(){
  ll n;
  cin>>n;
  
  cout<<calc(n)<<endl;
    
  return 0;
}
