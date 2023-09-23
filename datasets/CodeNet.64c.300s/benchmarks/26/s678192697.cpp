#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <queue>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int mod = 1000000007;
ll exp(ll m, ll n) {
  if(n == 0) {return 1;}
  if(n == 1) {return m % mod;}
  ll tmp;
  tmp = exp(m * m % mod, n/2) % mod;
  if(n%2) {tmp = tmp * m % mod;}
  return tmp;
}

int main() {
  ll m, n;
  cin >> m >> n;
  cout << exp(m, n) << endl;
}
