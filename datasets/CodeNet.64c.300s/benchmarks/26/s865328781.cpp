#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000007;
long long modpow(long long a, long long b){
  long long ans = 1;
  while (b > 0){
    if (b % 2 == 1){
      ans = ans * a % MOD;
    }
    a = a * a % MOD;
    b /= 2;
  }
  return ans;
}
int main(){
  long long m, n;
  cin >> m >> n;
  cout << modpow(m, n) << endl;
}
