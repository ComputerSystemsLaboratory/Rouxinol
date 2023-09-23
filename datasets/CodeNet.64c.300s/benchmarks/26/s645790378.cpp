#include<iostream>
using namespace std;

typedef long long ll;

const ll MOD = 1000000007;

ll mod_pow(ll n,ll m,ll mod){
  ll res = 1;
  while(m>0){
    if(m&1) res =(res* n) %mod;
    n = n * n % mod;
    m>>=1;
  }
  return res;
}


ll solve(int n,int m){
  return mod_pow(n,m,MOD);
}


int main(){
  ll n,m;
  cin>>n>>m;
  cout<<solve(n,m)<<endl;
}