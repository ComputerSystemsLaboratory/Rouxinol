#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod_pow(ll x,ll n,ll mod){
  if(n == 0) return 1;
  ll res = mod_pow(x * x % mod,n / 2,mod);
  if(n & 1) res = res * x % mod;
  return res;
}

ll mod_mul(ll a,ll b,ll mod){
  if(b == 0){ return 0LL; }
  ll res = mod_mul((a+a)%mod,b/2,mod);
  if(b & 1){ res = (res + a) % mod; }
  return res;
}

bool miller_rabin(ll N){
  if(N == 2){ return true; }
  if(N % 2 == 0 || N <= 1){
    return false;
  }
  int a[] = {2,3,5,7,11,13,17,-1};
  ll s = 0,d = N-1;
  while(d % 2 == 0){
    s++;
    d >>= 1;
  }
  for(int i = 0 ; a[i] != -1 && a[i] < N ; i++){
    int x = mod_pow(a[i],d,N);
    if(x != 1){
      int j;
      for(j = 0 ; j < s ; j++){
        if(x == N-1){ break; }
        x = mod_mul(x,x,N);
      }
      if(j == s){ return false;}
    }
  }
  return true;
}

int main(){
  int T,N,ans = 0;
  cin >> T;
  while(T--){
    cin >> N;
    ans += miller_rabin(N);
  }
  cout << ans << endl;
  return 0;
}