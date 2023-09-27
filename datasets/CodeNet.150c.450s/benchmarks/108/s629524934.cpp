#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <map>
#define FOR(i,b,e) for(int i=b;i<e;i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

const int N = 100;
int n;
int d[N+1];
vector< vector<int> > ns;
queue<int> q;

int main() {
	cin.tie(0);
 	ios::sync_with_stdio(false);

  vector<int> v;
  ns.push_back(v);
  cin >> n;
  FOR(i, 1, n+1) {
    int id, k, x; cin >> id;
    vector<int> v;
    cin >> k;
    REP(j, k) {
      cin >> x;
      v.push_back(x);
    }
    ns.push_back(v);
  }

  FOR(i, 1, n+1) d[i] = -1;

  int u = 1;
  q.push(u);
  d[u] = 0;
  while (!q.empty()) {
    u = q.front();
    q.pop();
    REP(i, ns[u].size()) {
      int v = ns[u][i];
      if (d[v] == -1) {
        q.push(v);
        d[v] = d[u] + 1;
      }
    }
  }

  FOR(i, 1, n+1) {
    cout << i << " " << d[i] << endl;
  }
}
