#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> mp;
ll inf =  1e9;


int main(){
 while(1){
  ll n,m;
  cin>>n>>m;
  if(n==0)break;
  vector<ll> h(n),w(m);
  for(ll i=0;i<n;i++)cin>>h[i];
  for(ll i=0;i<m;i++)cin>>w[i];
  map<ll,ll> hh;
  for(ll i=0;i<n;i++){
   ll sum = h[i];
   hh[sum]++;
   for(ll j=i+1;j<n;j++) sum+=h[j],hh[sum]++;
  }
  ll res = 0;
  for(ll i=0;i<m;i++){
   ll sum = w[i];
   res += hh[sum];
   for(ll j=i+1;j<m;j++) sum+=w[j],res+= hh[sum];
  }

  cout<<res<<endl;
 }
    return 0;
}

