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

vector<pair<ll, ll>>prime_fact(ll n) {
  vector<pair<ll, ll>>res;
  for(int a = 2; a*a <= n; a++) {
    if(n % a != 0) { continue;}
    ll ex = 0;
    while(n % a == 0) {
      ex++;
      n /= a;
    }
    res.push_back({a, ex});
  }
  if(n != 1) { res.push_back({n, 1});}
  return res;
}

int main() {
  int n;
  cin >> n;
  vector<pair<ll, ll>>res = prime_fact(n);
  printf("%d:",n);
  for(auto p: res) {
    int a = p.first;
    int ex = p.second;
    rep(i, ex) {
      printf(" %d", a);
    }
  }
  printf("\n");
  return 0;
}
