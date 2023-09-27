#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;


vector<pair<int,int> > nodes[10010];

class priority {
  public:
    bool operator() (const pair<int,int> &x, const pair<int,int> &y) {
      return x.second > y.second;
    }
};

int mst(int n) {
  vector<int> vis(n, 0);
  vector<int> dis(n, INT_MAX);
  priority_queue<pair<int,int>, vector<pair<int,int> >, priority> pq;
  pq.push(make_pair(0, dis[0] = 0));
  int ans = 0;
  while (!pq.empty()) {
    pair<int,int> now = pq.top();
    pq.pop();
    int no = now.first;
    int di = now.second;
    if (vis[no]) continue;
    vis[no] = 1;
    ans += di;
    for (int i = 0; i < nodes[no].size(); i++) {
      pair<int,int> next = nodes[no][i];
      if (!vis[next.first] && next.second < dis[next.first]) {
        dis[next.first] = next.second;
        pq.push(next);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (!vis[i]) return -1;
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, x, y, z;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> x >> y >> z;
    nodes[x].push_back(make_pair(y, z));
    nodes[y].push_back(make_pair(x, z));
  }
  cout << mst(n) << endl;
  return 0;
}