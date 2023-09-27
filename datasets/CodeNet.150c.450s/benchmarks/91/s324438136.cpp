#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,b,e) for (int i=(int)(b); i<(int)(e); i++)
#define ALL(x) (x).begin(), (x).end()

bool pr[1000000];

template <size_t N>
void psieve(bool (&p)[N]) {
  for (int i = 0; i < N; i++)
    p[i] = true;
  p[0] = p[1] = false;
  for (int i = 2; i * i < N; i++) {
    if (!p[i])
      continue;
    for (int j = i * i; j < N; j += i)
      p[j] = false;
  }
}

int solve(int n) {
  int r = 0;
  REP (i, n+1) r += pr[i];
  return r;
}

int main() {
  ios::sync_with_stdio(false);
  psieve(pr);
  int n;
  while (cin >> n) {
    cout << solve(n) << endl;
  }
  return 0;
}