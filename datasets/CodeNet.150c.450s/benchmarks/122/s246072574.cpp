#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <cassert>
#include <bitset>
using namespace std;

typedef pair<int, int> P;
#define rep(i, n) for (int i=0; i<(n); i++)
#define all(c) (c).begin(), (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define index(xs, x) (int)(lower_bound(all(xs), x) - xs.begin())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007

class Heap {
public:
  typedef long long P;
  int sz = 0;
  vector<P> heap;

  void push(int x) {
    int i = sz++;
    if (heap.size() < sz) heap.pb(0);
    while (i > 0) {
      int p = (i-1) / 2;
      if (heap[p] >= x) break;
      heap[i] = heap[p];
      i = p;
    }
    heap[i] = x;
  }
  P pop() {
    P ret = heap[0];
    P x = heap[--sz];
    int i = 0;
    while (i*2+1 < sz) {
      int a = i*2+1, b = i*2+2;
      if (b < sz && heap[b] > heap[a]) a = b;
      if (heap[a] <= x) break;
      heap[i] = heap[a];
      i = a;
    }
    heap[i] = x;
    return ret;
  }
};

signed main() {
  ios::sync_with_stdio(false); cin.tie(0);
  Heap heap;
  string s;
  while (cin >> s) {
    if (s == "end") break;
    if (s[0] == 'i') {
      int x; cin >> x;
      heap.push(x);
    }
    else {
      cout << heap.pop() << "\n";
    }
  }
  return 0;
}