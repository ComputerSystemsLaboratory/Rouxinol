#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
      ll n;
      cin>>n;
      ll A[n+5];
      ll sum=0;
     map<ll,ll> m;
     for(int i=0;i<n;i++){
       cin>>A[i];
       sum+=A[i];
       m[A[i]]++;
        }
  ll q;
  cin>>q;
  while(q--)
  {
    ll b,c;
    cin>>b>>c;
    ll ans=sum-m[b]*b+c*m[b];
    m[c]+=m[b];
    m[b]=0;
    cout<<ans<<endl;
    sum=ans;
     
    
  }
}
