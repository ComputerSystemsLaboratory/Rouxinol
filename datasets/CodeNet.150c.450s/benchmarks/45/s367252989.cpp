#include <cstdio>
using namespace std;
typedef long long ll;
const int mod=1000000007;
ll mod_pow(ll x,ll n){
  ll res=1;
  if(n==0) return 1;
  if(n>0){
  res=mod_pow(x,n/2);
    if(n%2==0){
      res=(res*res)%mod;
    }
    else{
      res=(((res*res)%mod)*x)%mod;
    }
  }
  return res;
}
int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  printf("%d\n",mod_pow(n,m));
  return 0;
}