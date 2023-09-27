#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <memory>
#include <cstring>
#include <cassert>
#include <numeric>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cctype>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define REP2(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define REP(i, n) REP2(i, 0, n)
#define ALL(S) (S).begin(), (S).end()
typedef long long ll;

int plus_tax(int v, int p){
  return v * (100 + p) / 100;
}

int main(){
  ios::sync_with_stdio(false);

  int x, y, s;
  while (cin >> x >> y >> s && x + y + s > 0) {
    int res = 0;
    REP2(i, 1, s){
      REP2(j, 1, s){
        if (plus_tax(i, x) + plus_tax(j, x) == s){
          res = max(res, plus_tax(i, y) + plus_tax(j, y) );
        }
      }
    }
    cout << res << endl;
  }
  
  return 0;
}