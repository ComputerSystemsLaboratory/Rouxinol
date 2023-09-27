#include <bits/stdc++.h>
using namespace std;

int isPrime(int x) {
  int i;
  if (x < 2) return 0;
  else if (x == 2) return 1;

  if (x % 2 == 0) return 0;

  for (i = 3; i*i <= x; i+=2) {
    if (x % i == 0) return 0;
  }

  return 1;
}

int main() {
  int n, x, i;
  int cnt = 0;

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> x;
    if (isPrime(x)) cnt++;
  }

  cout << cnt << endl;
 
  return 0;

}
