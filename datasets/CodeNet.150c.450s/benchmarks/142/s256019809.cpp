#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n);i++)
using ll = long long;
const ll MOD=1000000007;
const long long INF = 1LL << 60;
const double pi=acos(-1.0);

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }



int main() 
{
  ll N,K; cin>>N>>K;
  vector<ll> A(N);
  rep(i,N) cin>>A.at(i);
  rep(i,N-K){
    if(A.at(i)<A.at(i+K)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }  
  return 0;
}
