/*
 * c.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

const int MAX_N = 10000;
const int MAX_P = 10000;

/* typedef */

typedef vector<int> vi;

/* global variables */

bool primes[MAX_P + 1];
vi pnums;

/* subroutines */

void gen_primes(int maxp, vi &pnums) {
  memset(primes, true, sizeof(primes));
  primes[0] = primes[1] = false;

  int p;
  for (p = 2; p * p <= maxp; p++)
    if (primes[p]) {
      pnums.push_back(p);
      for (int q = p * p; q <= maxp; q += p) primes[q] = false;
    }
  for (; p <= maxp; p++)
    if (primes[p]) pnums.push_back(p);
}

bool is_prime(int a) {
  if (a <= MAX_P) return primes[a];

  for (vi::iterator vit = pnums.begin(); vit != pnums.end(); vit++) {
    int &pi = *vit;
    if (pi * pi > a) break;
    if (a % pi == 0) return false;
  }
  return true;
}

/* main */

int main() {
  gen_primes(MAX_P, pnums);

  int n;
  cin >> n;

  int cnt = 0;
  
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    if (is_prime(ai)) cnt++;
  }

  printf("%d\n", cnt);
  return 0;
}