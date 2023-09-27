#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>

using namespace std;

#define FOR(i,k,n) for(int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

template<class T> void debug(T begin, T end){ for(T i = begin; i != end; ++i) cerr<<*i<<" "; cerr<<endl; }
inline bool valid(int x, int y, int W, int H){ return (x >= 0 && y >= 0 && x < W && y < H); }

typedef long long ll;
const int INF = 100000000;
const double EPS = 1e-8;
const int MOD = 1000000007;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

typedef pair<int, int> P;

int main(){
  int h, w;
  while(cin >> h >> w && (h != 0 && w != 0)){
    P base(h * h + w * w, h);
    P ans(INF, INF);
    int ans_x, ans_y;
    for(int y = 1; y <= 150; y++){
      for(int x = y + 1; x <= 150; x++){
        P p(x * x + y * y, y);
        if(p > base && p < ans){
          ans = p;
          ans_x = x, ans_y = y;
        }
      }
    }
    printf("%d %d\n", ans_y, ans_x);
  }
  return 0;
}