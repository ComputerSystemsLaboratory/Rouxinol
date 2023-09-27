#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;

int n;
int adj[110][110] = {};

int main() {
  cin >> n;
  rep(i, n) {
    int id, deg;
    cin >> id >> deg;
    --id;    // 0-indexedに直す
    rep(j, deg) {
      int v;
      cin >> v;
      --v;    // 0-indexedに直す
      ++adj[id][v];
    }
  }
  rep(i, n) {
    rep(j, n) {
      cout << adj[i][j] << ((j != n - 1)? " " : "\n");
    }
  }
  return 0;
}

