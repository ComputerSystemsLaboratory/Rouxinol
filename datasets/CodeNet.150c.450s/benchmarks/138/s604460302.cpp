#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <numeric>
#include <functional>

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()

using namespace std;
typedef long long ll;

int gcd(int x, int y) {
  if (x < y) return gcd(y, x);

  if (y == 0) {
    return x;
  } else {
    return gcd(y, x % y);
  }
}

int main(int argc, char *argv[])
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x, y;

  cin >> x >> y;
  cout << gcd(x, y) << endl;
  
  return 0;
}