#include <iostream>
#include <vector>
#define eol '\n'
using namespace std;

int gcd(int a, int b) {
  int mx = max(a, b);
  int mn = min(a, b);

  if (mx % mn == 0) {
    return mn;
  } else {
    return gcd(mx % mn, mn);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int a, b;
  cin >> a >> b;

  cout << gcd(a, b) << eol;
  
  return 0;
}