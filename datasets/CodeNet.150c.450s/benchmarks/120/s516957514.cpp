#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const double EPS = 1e-10;
const double PI  = acos(-1.0);

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int solve(int R, int C, vector<vector<bool> >& mochi) {
  int result = 0;
  vector<vector<bool> > mochi2(R, vector<bool>(C));
  for (int mask = 0; mask < (1 << R); mask++) {
    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C; j++) {
        mochi2[i][j] = mochi[i][j] ^ ((mask & (1 << i)) >> i);
      }
    }
    int count = 0;
    REP(j, C) {
      int rowCount = 0;
      REP(i, R) {
        if (mochi2[i][j] == true) rowCount++;
      }
      rowCount = max(rowCount, R - rowCount);
      count += rowCount;
    }
    result = max(result, count);
  }
  return result;
}

int main() {
  while (true) {
    int R, C;
    cin >> R >> C;
    if (R == 0 && C == 0) break;

    vector<vector<bool> > mochi(R, vector<bool>(C, false));
    REP(i, R) REP(j, C) {
      int x; cin >> x;
      mochi[i][j] = (x == 1);
    }

    int answer = solve(R, C, mochi);
    cout << answer << endl;
  }
}