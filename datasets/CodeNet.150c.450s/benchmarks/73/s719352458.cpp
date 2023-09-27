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
#define P pair<int, int>
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
const int MAX_N = 200000;

int bit[MAX_N + 1], n, q;

void init(){
  memset(bit, 0, sizeof(bit));
}

int sum(int i){
  int ret = 0;
  while(i > 0){
    ret += bit[i];
    i -= (i & -i);
  }
  return ret;
}

void add(int i, int x){
  while(i <= n){
    bit[i] += x;
    i += (i & -i);
  }
}

int main() {
  cin >>n >>q;
  init();
  REP(i, q){
    int query, x, y;
    cin >>query >>x >>y;
    if(query){
      if(x == 0) cout <<sum(y) <<endl;
      else cout <<sum(y) - sum(x - 1) <<endl;
    } else
      add(x, y);
  }
  return 0;
}