#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <climits>
#include <utility>

#define PRINT(STR) cout << STR << endl;
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define SPACE " "

typedef long long ll;

using namespace std;

int nextInt() { int n = -1; cin >> n; return n; }
double nextDouble() { double d = -1; cin >> d; return d; }
ll nextll() { ll n = -1; cin >> n; return n; }
string nextString() { string str; cin >> str; return str; }

int INF = 1LL << 25;
double EPS = 1e-9;
int numofbits(int bits)
{
    bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
    bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
    bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
    bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
    return (bits & 0x0000ffff) + (bits >>16 & 0x0000ffff);
}

// BEGIN //////////////////////////////////////////////////////////////
int main() {
  int N = nextInt();
  REP(i, N) {
    int b = 0, c = 0;
    bool flag = true;
    REP(j, 10) {
      int a = nextInt();
      if (a > b) {
        b = a;
      } else if (a > c) {
        c = a;
      } else {
        flag = false;
      }
    }
    if (flag) {
      PRINT("YES");
    } else {
      PRINT("NO");
    }
  }
	return 0;
}
// END   //////////////////////////////////////////////////////////////