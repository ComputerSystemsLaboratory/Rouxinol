#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
typedef pair<int, int> P;
typedef pair<int, P> PP;

int H, W = 5;

vector<PP> check(vector< vector<int> > &v){
  vector<PP> res;
  REP(i, H){
    int j = 0;
    while(j < W){
      int cnt = 0, tar = v[i][j];
      while(j < W && v[i][j] == tar) { ++cnt; ++j; }
      if(tar != -1 && cnt >= 3) res.push_back(PP(cnt, P(i, j)));
    }
  }
  return res;
}

int remove(vector< vector<int> > &v, vector<PP> &ps){
  int res = 0;
  REP(i, ps.size()){
    int cnt = ps[i].first, y = ps[i].second.first, x = ps[i].second.second;
    REP(j, cnt){
      res += v[y][x - j - 1];
      v[y][x - j - 1] = -1;
    }
  }
  return res;
}

void drop(vector< vector<int> > &v){
  for(int i = H - 1; i >= 0; --i){
    REP(j, W){
      if(v[i][j] != -1) continue;
      for(int y = i - 1; y >= 0; --y){
        if(v[y][j] != -1){
          swap(v[y][j], v[i][j]);
          break;
        }
      }
    }
  }
}

int main() {
  while(cin >>H && H){
    vector< vector<int> > v(H, vector<int>(W));
    REP(i, H) REP(j, W) cin >>v[i][j];
    vector<PP> ps = check(v);
    int res = 0;
    while(ps.size()){
      res += remove(v, ps);
      drop(v);
      ps = check(v);
    }
    cout <<res <<endl;
  }
  return 0;
}