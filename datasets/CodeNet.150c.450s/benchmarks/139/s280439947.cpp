// C++ 14
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(__x, __start, __end) for(int __x = __start; __x < __end; __x++)

int n, m;
const int INF = 100000000;
vector<int> G[100000];
vector<int> D(100000, INF);
vector<int> P(100000, 0);

void bfs() {
  queue<int> Q;
  Q.push(0);
  D[0] = 0;
  while (Q.size()) {
    int p = Q.front(); Q.pop();
    for (auto && c: G[p]) {
      if (D[c] != INF) continue;
      D[c] = D[p] + 1;
      P[c] = p + 1;
      Q.push(c);
    }
  }
}

int main() {
  cin >> n >> m;
  loop(i,0,m) {
    int a, b; cin >> a >> b;
    a--;b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  bfs();
  cout << "Yes" << endl;
  loop(i,1,n) {
    cout << P[i] << endl;
  }
  return 0;
}
