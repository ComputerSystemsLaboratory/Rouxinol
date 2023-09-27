#include <bits/stdc++.h>

#define X first
#define Y second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define rep(i, a, b) for (unsigned i = (a); i <= (b); ++i)
#define per(i, a, b) for (unsigned i = (a); i >= (b); --i)

using namespace std;

using I = int;
using L = long;
using F = float;
using S = string;
using LL = long long;
using VI = vector<int>;
using VL = vector<long>;
using VF = vector<float>;
using VS = vector<string>;
using PLL = pair<long, long>;
using PLF = pair<long, float>;
using PLS = pair<long, string>;
using PSL = pair<string, long>;
using PSF = pair<string, float>;
using PSS = pair<string, string>;
using MLL = map<long, long>;
using MLF = map<long, float>;
using MLS = map<long, string>;
using MSL = map<string, long>;
using MSF = map<string, float>;
using MSS = map<string, string>;

const long kMax2 = 109;
const long kMax3 = 1009;
const long kMax4 = 10009;
const long kMax5 = 100009;
const long kMax6 = 1000009;
const long kInfI = 0x3F3F3F3F;
const float kInfF = 1e15;

int main(int argc, char const *argv[]) {
  while (1) {
    L n;
    L ans1 = 0;
    L ans2 = 0;
    scanf("%ld", &n);
    if (n == 0) { break; }
    for (unsigned i = 0; i < n; i++) {
      L a, b;
      cin >> a >> b;
      if (a > b) {
        ans1 += a + b;
      } else if (a < b) {
        ans2 += a + b;
      } else {
        ans1 += a;
        ans2 += b;
      }
    }
    printf("%ld %ld\n", ans1, ans2);
  }

  return 0;
}