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

int n, q;
vector<int> v, parent, depth;

int find(int a){
  if(parent[a] == a) return a;
  else return parent[a] = find(parent[a]);
}

void unite(int a, int b){
  int pa = find(a), pb = find(b);
  if(pa == pb) return ;

  if(depth[pa] > depth[pb]) swap(pa, pb);
  if(depth[pa] == depth[pb]) ++depth[pa];
  parent[pb] = pa;
}

bool same(int a, int b){
  return find(a) == find(b);
}

int main() {
  cin >>n >>q;
  v = vector<int>(n);
  parent = vector<int>(n);
  depth = vector<int>(n, 1);
  REP(i, n)
    v[i] = parent[i] = i;
  REP(i, q){
    int query, x, y;
    cin >>query >>x >>y;
    if(query)
      cout <<(same(x, y) ? 1 : 0) <<endl;
    else
      unite(y, x);
  }
  return 0;
}