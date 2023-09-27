#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll mod_pow(ll a,ll b){
  ll res=1;
  for(int i=0;i<60;i++){
    if(b>>i&1){
      res=res*a%mod;
    }
    a=a*a%mod;
  }
  return res;
}
 
int main(){
  ll m,n;
  cin>>m>>n;
  cout<<mod_pow(m,n)<<endl;
  return 0;
}
