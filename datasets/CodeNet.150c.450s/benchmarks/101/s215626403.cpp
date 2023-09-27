#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100000;
vector<int> friends[MAX + 1];
int groups[MAX + 1];

void dfs(int id, int gid) {
  if (groups[id] != -1) return;
  groups[id] = gid;

  int l = friends[id].size();
  for (int i = 0; i < l; i++) {
    dfs(friends[id][i], gid);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int a, b, q;
  int gid = 0;

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    friends[a].push_back(b);
    friends[b].push_back(a);
  }

  for (int i = 0; i < n; i++) groups[i] = -1;

  for (int i = 0; i < n; i++) {
    if (groups[i] == -1) dfs(i, gid++);
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> a >> b;
    if (groups[a] == groups[b]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}