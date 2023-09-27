#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main(){
    ll n,x,a[100005],q,b,c,ans=0,k;
    cin >> n ;
    rep(i,100005){
        a[i]=0;
    }
    rep(i,n){
        cin >> x;
        a[x]++;
    }
  rep(i,100005){
            ans+=i*a[i];
        }
  cin >> q;
    rep(i,q){
        cin >> b >>c;
      k=a[b];
        a[c]+=a[b];
        a[b]=0;
        ans=ans+(c-b)*k;
            cout << ans <<endl;

    }
    
    
}