#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
ll mod_pow(ll x, ll n, ll mod){
  ll res = 1;
  while(n > 0){
    if(n & 1) res = res * x % mod;
    x = x*x % mod;
    n >>= 1;
  }
  return res;
}

ll mod_mul(ll x, ll n, ll mod){
  x %= mod;
  n %= mod;
  return x*n % mod;
}

bool millrr_rabin(ll n){
  if(n == 2) return true;
  if((n & 1) == 0 || n <= 1) return false;
  int a[] = {2, 3, 5, 7, 11, 13, 17, -1}, r;
  ll s = 0, d, x;
  d = n - 1;
  while((d & 1) == 0){
    s++;
    d = d >> 1;
  }
  
  for(int i = 0 ; a[i] != -1 && a[i] < n ; i++){
    if((x = mod_pow(a[i], d, n)) != 1){
      for(r = 0 ; r < s ; r++){
	if(x == n-1) break;
	x = mod_mul(x, x, n);
      }
      if(r == s) return false;
    }
  }
  return true;
}

int main(){
  int sum[1000010];
  sum[0] = 0;
  
  for(int i = 1 ; i <= 1000000 ; i++){
    sum[i] = sum[i-1];
    if(millrr_rabin(i)) sum[i]++;
  }
  
  int n;
  while(cin >> n){
    cout << sum[n] << endl;
  }
  
  
  return 0;
}