#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n,x;
  cin>>n;
  map<ll,ll> d;
  ll sum=0;
  for(ll i=0; i<n; i++){
    cin>>x;
    d[x]++;
    sum=sum+x;
  }
  ll q;
  cin>>q;
  while(q--){
    ll b,c;
    cin>>b>>c;
    ll a=d[b];
    sum=sum-b*a+c*a;
    d[c]+=a;
    d[b]=0;
    cout<<sum<<"\n";
  }
    return 0;
}
