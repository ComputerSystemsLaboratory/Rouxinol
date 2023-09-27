#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#define pb push_back
#define debug(x) cout<< #x <<": "<<x<<endl
#define debug2(x,y) cout<< #x <<": "<< x <<", "<< #y <<": "<< y <<endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector< T > >;

vi ts_d;
vi ts_f;

template<class T>
void dfs(int cur, int &time_visit, T graph) {
  // visiting cur
  time_visit += 1;
  ts_d[cur] = time_visit;
  for (auto dst : graph[cur]) {
    if (ts_d[dst] == 0) {
      dfs(dst, time_visit, graph);
    }
  }
  time_visit += 1;
  ts_f[cur] = time_visit;
  return;
}

int main() {
  int time = 0;
  int n;
  cin >> n;
  ts_d.reserve(n);
  ts_f.reserve(n);
  ts_d.assign(1, 0);
  vector<set<int> > graph(n, set<int>());

  for (int i = 0; i < n; ++i) {
    int num;
    cin >> num;
    num -= 1;
    int out;
    cin >> out;
    for (int j = 0; j < out; ++j) {
      int tmp;
      cin >> tmp;
      tmp -= 1;
      graph[i].insert(tmp);
    }
  }

  for (int i = 0; i < n; ++i) {
    if (ts_d[i] == 0) {
      dfs(i, time, graph);
    }
  }

  for (int i = 0; i < n; ++i) {
    printf("%d %d %d\n", i+1, ts_d[i], ts_f[i]);
  }

  return 0;
}