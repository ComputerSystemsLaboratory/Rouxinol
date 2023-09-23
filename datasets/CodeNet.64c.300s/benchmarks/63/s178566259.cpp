#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

typedef long long ll;

double xx(double r) {
  return r*r;
}

ll gcd(ll a, ll b) {
  if (a == 0) return b;
  return gcd(b%a, a);
}

int main() {
  ll a, b;
  while ( scanf("%lld%lld", &a, &b) != EOF ) {
    ll g = gcd(a, b);
    ll l = a / g * b;
    cout << g << " " << l << endl;
  }
}