#include<bits/stdc++.h>
#define rep(i,a,n) for(ll i=a;i<n;i++)
using namespace std;
typedef long long ll;
int main(){
  ll num[100001];
  rep(i,0,100001)num[i]=0;
  ll n;
  cin>>n;
  ll a[n];
  ll sum=0;
  rep(i,0,n){
    cin>>a[i];
    num[a[i]]++;
    sum+=a[i];
  }
  ll q;
  cin>>q;
  ll b[q],c[q];
  rep(i,0,q)cin>>b[i]>>c[i];
  rep(i,0,q){
    sum+=(c[i]-b[i])*num[b[i]];
    cout<<sum<<endl;
    num[c[i]]+=num[b[i]];
    num[b[i]]=0;
  }
  return 0;
}