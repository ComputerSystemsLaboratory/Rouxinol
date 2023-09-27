#include <iostream>
#include <utility>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
  if (a%b == 0) return b;
  return gcd(b, a%b);
}

int main() {
  ll a, b;
  while (cin >> a >> b) {
    if (a < b) swap(a, b);
    ll g = gcd(a, b);
    cout << g << " " << (a*b)/g << endl;
  }
}