#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

vector<int> neighbors[100005];
int root[100005];

void dfs(int i, int start) {
  root[i] = start;
  // visit all i neighbors
  for (int j : neighbors[i]) {
    if (root[j] == -1) {
      dfs(j, start);
    }
  }
}

int main() {
  int n, m, x, y, q;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &x, &y);
    neighbors[x].push_back(y);
    neighbors[y].push_back(x);
  }
  memset(root, -1, sizeof(root));
  for (int i = 0; i < n; i++) {
    if (root[i] == -1)
      dfs(i, i);
  }
  scanf("%d", &q);
  for (int i = 0; i < q; i++) {
    scanf("%d %d", &x, &y);
    if (root[x] == root[y])
      printf("yes\n");
    else
      printf("no\n");
  }
}

