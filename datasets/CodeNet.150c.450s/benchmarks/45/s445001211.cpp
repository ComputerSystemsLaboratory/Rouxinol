#include<bits/stdc++.h>
using namespace std;
using ll=long long;


const int MOD=1000000000+7;

ll f(ll m,ll n){
  ll cal=1;
  while(n>0){
    if(n&1){
      cal*=m;
      cal=cal%MOD;
    }
    m *= m;
    m =m%MOD;
    n >>= 1;
  }
  return cal;
}


int main(){
  ll m,n;
  cin >> m >> n;
  cout << f(m,n) << endl;
  return 0;
}

