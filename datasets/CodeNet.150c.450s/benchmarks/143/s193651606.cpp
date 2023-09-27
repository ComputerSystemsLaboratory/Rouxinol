#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Graph = vector<vector<ll>>;
int main(){
  ll A;
  cin>>A;
  ll b=0;
  vector<ll>vec(100000+1,0);
  for(ll i=0;i<A;i++){
    ll a;
    cin>>a;
    vec.at(a)+=1;
    b+=a;
  }
  
  ll K;
  cin>>K;
  for(ll i=0;i<K;i++){
    ll c,d;
    cin>>c>>d;
    b+=(d-c)*vec.at(c);
    vec.at(d)+=vec.at(c);
    vec.at(c)=0;
    cout<<b<<endl;
  }
}
    
