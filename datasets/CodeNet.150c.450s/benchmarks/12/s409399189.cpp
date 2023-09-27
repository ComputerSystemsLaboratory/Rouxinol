#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
typedef long long ll;

int main() {
  int X;
  cin >> X;

  int H[X + 10];
  FOR(i, 1, X + 1) {
    cin >> H[i];
  }

  FOR(i, 1, X + 1) {
    cout << "node " << i << ": key = " << H[i] << ", ";
    int left = 2 * i;
    int right = 2 * i + 1;
    int parent = i / 2;

    if (parent > 0) {
      cout << "parent key = " << H[parent] << ", ";
    }
    if (left <= X) {
      cout << "left key = " << H[left] << ", ";
    }
    if (right <= X) {
      cout << "right key = " << H[right] << ", ";
    }
    cout << endl;
  }
  return 0;
}