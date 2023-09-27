#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <map>
#define FOR(i,b,e) for(int i=b;i<e;i++)
#define REP(i,n) FOR(i,0,n)
#define INFTY 1000000
using namespace std;

const int N = 100;
int n;
int D[N], W[N][N];
bool V[N];

void dijkstra() {
  int nn, minD, cost = 0;

  REP(i, n) D[i] = INFTY;
  D[0] = 0;
  nn = 0;

  while (true) {
    minD = INFTY;
    REP(i, n) {
      if (!V[i] && D[i] < minD) {
        minD = D[i];
        nn = i;
      }
    }
    if (minD == INFTY) break;

    V[nn] = true;
    REP(i, n) {
      if (!V[i] && D[nn] + W[nn][i] < D[i]) {
        D[i] = D[nn] + W[nn][i];
      }
    }
  }
}

int main() {
	cin.tie(0);
 	ios::sync_with_stdio(false);

  cin >> n;
  REP(i, n) D[i] = INFTY;
  REP(i, n) {
    REP(j, n) W[i][j] = INFTY;
  }

  REP(i, n) {
    int id, k, v, c;
    cin >> id >> k;
    REP(j, k) {
      cin >> v >> c;
      W[id][v] = c;
    }
  }

  dijkstra();
  REP(i, n) {
    cout << i << " " << D[i] << endl;
  }
}
