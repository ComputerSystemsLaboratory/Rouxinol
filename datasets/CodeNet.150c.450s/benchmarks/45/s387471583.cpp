#include <iostream>
#define mod 1000000007
using namespace std;
typedef long long ll;

ll mod_pow(ll x,ll y){
  ll res=1;
  for(int i=0;i<60;i++){
    if(y&(1LL<<i)) res=res*x%mod;
    x=x*x%mod;
  }
  return res;
}

int main(){
  ll m,n;
  cin>>m>>n;
  cout << mod_pow(m,n)<<endl;
  return 0;
}