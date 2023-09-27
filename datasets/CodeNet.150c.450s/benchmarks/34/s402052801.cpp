#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
#define INF 1<<30

int main() {
  int table[31];
  table[0] = 1;
  table[1] = 1;
  table[2] = 2;
  for (int i=3; i<=30; ++i) {
    table[i] = table[i-1] + table[i-2] + table[i-3];
  }
  int n;
  while(cin >> n,n) {
    cout << (table[n]-1)/10/365+1 << endl;
  }
}