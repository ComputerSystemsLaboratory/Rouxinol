#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

int isPrime(ll x) {
  for(ll i=2; i*i<=x; i++) {
    if(x%i == 0) return false;
  }
  
  return true;
}

int main() {
  ll n, N;
  
  cin >> N;
  cout << N << ":";

  if(isPrime(N)) {
    cout << ' ' << N << endl;
    return 0;
  }
  
  n = N;
  
  ll cnt = 2;

  while(1) {
    if(n <= 1) break;
    for(ll j = cnt; j<=N; j++) {
      if(n % j == 0) {
	cout << " " << j;
	n/=j;
	cnt = j;
	break;
      }
    }
  }
  cout << endl;
  
  return 0;
}
