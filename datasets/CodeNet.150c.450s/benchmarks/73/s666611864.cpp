#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <utility>
#include <vector>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i, n) for (i = 0; i < n; i++)
#define loop(i, a, n) for (i = a; i < n; i++)
#define all(in) in.begin(), in.end()
#define shosu(x) fixed << setprecision(x)

typedef vector<int> vi;
typedef pair<int, int> pii;

// 1-indexed

int n; // range
int s[4 * 100005]; // n=1e5
int t;

int hyoka(int a, int b) { // sum
  return a + b;
}

//?????????
// INF????????????¨?????????

void sset(int n, vi d) {
  int i;
  for (t = 1; t < n; t *= 2)
    ;
  for (i = 0; i < n; i++) s[t + i] = d[i];
  for (; i < t; i++) s[t + i] = 0;
  for (i = t - 1; i; i--) s[i] = hyoka(s[i * 2], s[i * 2 + 1]);
}

// update
// i????????????°??????x?????????
void sud(int i, int n) {
  for (s[i += t] += n; i /= 2;) s[i] = hyoka(s[i * 2], s[i * 2 + 1]);
}

//??????¨?????????
//[a,b)????????????¨sout(a,b,1,0,t);
int sout(int a, int b, int i, int l, int r) {
  if (r <= a || b <= l) return 0;
  if (a <= l && r <= b) return s[i];
  return hyoka(sout(a, b, i * 2, l, (l + r) / 2), sout(a, b, i * 2 + 1, (l + r) / 2, r));
}

int main(void) {
  int i, j;
  int q;
  cin >> n >> q;
  vi d(n, 0);
  sset(n, d);
  rep(i, q) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com)
      cout << sout(x - 1, y, 1, 0, t) << endl;
    else
      sud(x - 1, y);
  }
}