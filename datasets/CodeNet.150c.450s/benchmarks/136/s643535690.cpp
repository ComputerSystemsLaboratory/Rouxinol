#include <bits/stdc++.h>

using namespace std;

template<typename T> T gcd(T a, T b) {
  return __gcd(a, b);
}

template<typename T> T lcm(T a, T b) {
  return a / gcd(a, b) * b;
}

int main() {
  int a, b;
  while (cin >> a >> b) {
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
  }
}