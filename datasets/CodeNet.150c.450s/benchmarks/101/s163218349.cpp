#include <iostream>
#include <vector>
#define eol '\n'
using namespace std;

vector< vector<int> > list;
vector<int> group;

void bfs(int v, int g) {
  if (group[v] != 0) {
    return;
  }
  group[v] = g;
  for (int i = 0; i < list[v].size(); i++) {
    bfs(list[v][i], g);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n,m,s,t,q;
  cin >> n >> m;

  list = vector< vector<int> >(n, vector<int>());
  group = vector<int>(n,0);
  
  for (int i = 0; i < m; i++) {
    cin >> s >> t;
    list[s].push_back(t);
    list[t].push_back(s);
  }

  int g = 1;
  for (int i = 0; i < n; i++) {
    if (group[i] == 0) {
      bfs(i, g);
      g++;
    }
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> s >> t;
    if (group[s] == group[t]) {
      cout << "yes" << eol;
    } else {
      cout << "no" << eol;
    }
  }
  return 0;
}