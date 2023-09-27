#include <cstdio>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;

struct Node {
  size_t v;
  bool used[20];
  char padding[4];

  Node() : v(0) {
    memset(used, false, 20);
  }
};

static vector<int> FindPossibleValues(const size_t* A, int n, size_t size) {
  vector<int> values(size + 1);
  values[size] = 1;

  queue<Node> q;
  Node root;
  q.push(root);
  while (!q.empty()) {
    const Node p = q.front();
    q.pop();

    for (int i = 0; i < n; ++i) {
      if (p.used[i] || values[p.v + A[i]])
        continue;
      Node new_node;
      new_node.v = p.v + A[i];
      memcpy(new_node.used, p.used, static_cast<size_t>(n));
      new_node.used[i] = true;
      q.push(new_node);
      values[new_node.v] = 1;
    }
  }

  return values;
}

int main() {
  int n;
  size_t A[20];

  scanf("%d", &n);
  size_t sum = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%lu", &A[i]);
    sum += A[i];
  }

  vector<int> values = FindPossibleValues(A, n, sum);

  int q;
  scanf("%d", &q);
  size_t m = 0;
  for (int i = 0; i < q; ++i) {
    scanf("%lu", &m);
    if (m < values.size() && values[m]) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }

  return 0;
}