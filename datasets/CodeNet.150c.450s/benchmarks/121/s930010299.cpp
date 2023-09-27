//include
//------------------------------------------
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//debug
//-------------------------------------------
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

const int MAX_H = 100;
const int MAX_W = 100;

int dp[ MAX_H + 1][ MAX_W + 1] = {};

int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};

int h, w;

void dfs(int y, int x, int item) {
  dp[y][x] = 0;
  REP(i,4) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx >= 0 && nx < w && ny >= 0 && ny < h && dp[ny][nx] != 0 && dp[ny][nx] == item ) dfs(ny, nx, item);
  }
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  char c;

  while(cin >> h >> w && h && w) {
    int count = 0;
    REP(i, h) {
      REP(j, w) {
        cin >> c;
        switch(c) {
          case '@':
            dp[i][j] = 1;
            break;
          case '#':
            dp[i][j] = 2;
            break;
          case '*':
            dp[i][j] = 3;
            break;
          default:
            break;
        }
      }
    }

    REP(i, h) {
      REP(j, w) {
        if(dp[i][j] != 0) {
          dfs(i, j, dp[i][j]);
          count++;
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}