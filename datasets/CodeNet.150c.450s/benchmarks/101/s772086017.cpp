#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>

#define NMAX 100000
using namespace std;

struct Node {
  vector<int> friends;
};
int group[NMAX];

void bfs(vector<Node> &nodes, int id) {
  static int groupno = 1;
  queue<int> q;
  q.push(id);
  set<int> st;

  group[id] = groupno;

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int i = 0; i < nodes[u].friends.size(); i++) {
      int fid = nodes[u].friends[i];
      if (group[fid] == -1) {
        q.push(fid);
        group[fid] = groupno;
      }
    }
  }
  groupno++;
}

int main() {
  vector<Node> nodes;
  int nrel, nuser;

  cin >> nuser;
  cin >> nrel;
  nodes.resize(nuser);
  int tmp1, tmp2;
  for (int i = 0; i < nrel; i++) {
    cin >> tmp1 >> tmp2;
    nodes[tmp1].friends.push_back(tmp2);
    nodes[tmp2].friends.push_back(tmp1);
  }
  for (int i = 0; i < nodes.size(); i++) {
    group[i] = -1;
  }

  int q, s, t;
  cin >> q;

  for (int i = 0; i < q; i++) {
    scanf("%d%d", &s, &t);
    if (group[s] == -1)
      bfs(nodes, s);
    printf("%s\n", group[s] == group[t] ? "yes" : "no");
  }
}