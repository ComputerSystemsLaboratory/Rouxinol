#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;
typedef long double ld;
typedef complex<ld> Point;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const ld eps = 1e-9, pi = acos(-1.0);
const ld dtop = pi / 180.;
const ld ptod = 1. / dtop;


int main() {
  while (1) {
    int n, p; cin >> n >> p;
    if (!n)break;
    vector<int>stones(n, 0);
    int bowl(p);
    int nplayer = 0;
    while (1) {
      if (bowl) {
        bowl--;
        stones[nplayer]++;
        if (stones[nplayer] == p)break;
      }
      else {
        bowl += stones[nplayer];
        stones[nplayer] = 0;
      }
      nplayer = (nplayer + 1) %n;
    }
    cout << nplayer << endl;
  }
  return 0;
}