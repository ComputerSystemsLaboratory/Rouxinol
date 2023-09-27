#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <set>

using namespace std;
typedef long long ll;
static const double EPS = 1e-9;
static const double PI = acos(-1.0);

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, n) for (int i = (s); i < (int)(n); i++)
#define FOREQ(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define DEC(i, s) for (int i = (s); i >= 0; i--)

#define SIZE(v) (int)((v).size())
#define MEMSET(v, h) memset((v), h, sizeof(v))
#define FIND(m, w) ((m).find(w) != (m).end())

int main() {
  int test;
  cin >> test;
  while (test--) {
    set<string> open;
    string str;
    cin >> str;
    FOREQ(i, 1, str.size() - 1) {
      string left, right;
      FOR(j, 0, i) { left += str[j]; }
      FOR(j, i, str.size()) { right += str[j]; }
      open.insert(left + right);
      open.insert(right + left);
      reverse(left.begin(), left.end());
      open.insert(left + right);
      open.insert(right + left);
      reverse(right.begin(), right.end());
      open.insert(left + right);
      open.insert(right + left);
      reverse(left.begin(), left.end());
      open.insert(left + right);
      open.insert(right + left);
    }
    cout << open.size() << endl;
  }
}