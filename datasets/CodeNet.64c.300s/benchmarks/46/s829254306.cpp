#include <bits/stdc++.h>
using namespace std;

bool isprime(int x) {
  if (x == 2) return true;
  else if(x < 2 || x % 2 == 0) return false;
  int i = 3;
  while(i <= sqrt(x)) {
    if( x % i == 0 ) return false;
    i = i + 2;
  }

  return true;
}

int main() {
  int a, d, n;
  while(cin >> a >> d >> n){
    if(a == 0 && d == 0 && n == 0) break;
    int i = 0, j = 0;
    int sum;
    while(true) {
      sum = a + i * d;
      if(isprime(sum))j++;
      if(j == n) {
        cout << sum << endl;
        break;
      }
      i++;
    }
  }

  return 0;
}