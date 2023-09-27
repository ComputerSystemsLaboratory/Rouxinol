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
int tonum(string s){
  stringstream ss(s);
  int n;
  ss >> n;
  return n;
}
string tostr(int n, int L){
  stringstream ss;;
  ss << n;
  string s;
  ss >> s;
  while(s.size() < L) s = "0" + s;
  return s;
}
int main(){
  int a, L;
  while(cin >> a >> L && !(a == 0 && L == 0)){
    map<int, int> dict;
    int cur = 1;
    while(true){
      if(dict[a] != 0){
        int dif = cur - dict[a];
        printf("%d %d %d\n", dict[a] - 1, a, dif);
        break;
      }
      dict[a] = cur++;
      string big = tostr(a, L);
      string small = tostr(a, L);
      sort(big.begin(), big.end());
      sort(small.begin(), small.end());
      reverse(big.begin(), big.end());
      a = tonum(big) - tonum(small);
    }
  }
  return 0;
}