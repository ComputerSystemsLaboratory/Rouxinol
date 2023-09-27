#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <string>
#include <map>
#include <set>
#include <locale.h>
#include <vector>
#include <iomanip>
#include <cassert>
#include <cstring>

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define pb push_back
#define mp make_pair
#define endl "\n"
#define rep(i,x,y) for(int i = x; i <= y; ++i)
#define repr(i,x,y) for(int i = x; i >= y; --i)
#define y1 wearsdfasdf
#define fi first
#define se second

typedef long long ll;

const int N = (int)(5e5) + 322;
const ll INF = (ll)(1e9) + 7;
const double eps = (1e-9);

using namespace std;


ll n, m, a[1111][1111], b[1111];

int main () {
  cin >> n >> m;
  rep(i, 1, n) {
    rep(j, 1, m) {
      cin >> a[i][j];
    }
  }
  rep(i, 1, m) {
    cin >> b[i];
  }
  rep(i, 1, n) {
    ll sum = 0;
    rep(j, 1, m) {
      sum += a[i][j] * b[j];
    }
    cout << sum << endl;
  }
  
  return 0;
}