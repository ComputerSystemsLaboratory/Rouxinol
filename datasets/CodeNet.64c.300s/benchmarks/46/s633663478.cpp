#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int x) {
  if(x == 2) return true;
  if(x == 1 || x % 2 == 0) return false;
  for (int i = 3; i <= sqrt(x); i += 2) {
    if(x % i == 0) return false;
  }
  return true;
}

int main() {
  int a, d, n;
  while(cin >> a >> d >> n, n) {
    int i = 0;
    int cnt = 0;
    while(cnt != n) {
      if(is_prime(a + i*d)) {
        cnt++;
      }
      i++;
    }
    cout << a + (i-1)*d << endl;
  }
}