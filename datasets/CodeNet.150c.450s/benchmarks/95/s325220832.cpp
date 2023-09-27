#include <bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(vec) vec.begin(), vec.end()
#define tmax(x,y,z) max((x),max((y),(z)))
#define tmin(x,y,z) min((x),min((y),(z)))
typedef long long ll;ll MM = 1000000000;ll mod = MM + 7; ll MMM=9223372036854775807;//2^63 -1
ll GCD(ll x, ll y) {if (y == 0) return x;else return GCD(y, x % y);}
ll LCM(ll x, ll y) { return x / GCD(x, y) * y;}
//cout << fixed << setprecision(10);

int main(){
  while(1){
  ll n; cin>>n;
    if(n==0) break;
    ll ans=0;
    vector<string>v(n);
    rep(i,n) cin>>v[i];
    bool fl=true,ri=true,le=true;
    for(ll i=0;i<n;i++){
    if(v[i]=="lu") le=false;
      if(v[i]=="ru") ri=false;
      if(v[i]=="ld") le=true;
      if(v[i]=="rd") ri=true;
    
      if(fl){
    if(!ri&&!le){
      ans++; fl=false;
    }
    }
    
      else{
      if(ri&&le){
      ans++; fl=true;
      }
      }
      
    }
        
    cout<<ans<<endl;
  }
  
}
