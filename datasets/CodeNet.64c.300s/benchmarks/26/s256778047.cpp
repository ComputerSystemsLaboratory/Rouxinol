#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void isprime(int x){
  int t = sqrt(x) + 1;
  bool prime = true;
  for(int i = 2; i <= min(t, x - 1); i++){
    if(x % i == 0) prime = false;
  }
  if(prime == true);
}

unsigned long long func(unsigned long long x, unsigned long long n){
  if(n == 0) return 1;
  if(n % 2 == 0) return func(x * x % 1000000007, n / 2) % 1000000007;
  return func(x * x % 1000000007, n / 2) * x % 1000000007;
}

void solve(){
  unsigned long long int m, n; cin >> m >> n;
  cout << func(m, n) << endl;
  return;
}
int main(){
  solve();
  return 0;
}

