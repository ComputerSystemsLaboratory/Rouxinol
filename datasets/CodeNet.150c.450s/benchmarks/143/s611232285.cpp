#include <bits/stdc++.h>
using namespace std;
using ll =long long;
#define all(v) v.begin(),v.end()

int main() {
ll N;
  cin>>N;
  map<ll,ll> S;
  ll sum=0;
  for(ll i=0;i<N;i++) {
ll A;
    cin>>A;
    sum+=A;
    S[A]++;
  }
  
  ll Q;
  cin>>Q;
  for(ll i=0;i<Q;i++) {
ll A,B;
    cin>>A>>B;
    sum+=S[A]*(B-A);
    cout<<sum<<endl;
    S[B]+=S[A];
    S.erase(A);
  }
}
  
  
  
  
  
  
  
  
  