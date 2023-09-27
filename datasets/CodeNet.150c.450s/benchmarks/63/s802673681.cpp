#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

vector<pair<int,int> > nodes[100100];

class priority {
  public:
    bool operator() (const pair<int,int> &x, const pair<int,int> &y) const {
      return x.second > y.second;
    }
};


void dijkstra(int source, int n, vector<int> &dis) {
  vector<int> vis(n, 0);
  priority_queue<pair<int,int>, vector<pair<int,int> >, priority> pq;
  pq.push(make_pair(source, dis[source] = 0));
  while (!pq.empty()) {
    pair<int,int> now = pq.top();
    pq.pop();
    int no = now.first;
    int di = now.second;
    if (vis[no]) continue;
    vis[no] = 1;
    for (int i = 0; i < nodes[no].size(); i++) {
      pair<int,int> next = nodes[no][i];
      int nno = next.first;
      int ddi = next.second;
      if (!vis[nno] && di + ddi < dis[nno]) {
        pq.push(make_pair(nno, dis[nno] = di + ddi));
      }
    }
  }
}

int main() {
  int n, m, source, x, y, z;
  cin >> n >> m >> source;
  for (int i = 0; i < m; i++) {
    cin >> x >> y >> z;
    nodes[x].push_back(make_pair(y, z));
  }
  vector<int> dis(n, INT_MAX);
  dijkstra(source, n, dis);
  for (int i = 0; i < n; i++) {
    if (dis[i] == INT_MAX) {
      cout << "INF" << endl;
    } else {
      cout << dis[i] << endl;
    }
  }
  return 0;
}