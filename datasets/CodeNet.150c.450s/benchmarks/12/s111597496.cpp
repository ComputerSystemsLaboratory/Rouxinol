#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> heap(n + 5, 0);
  for (int i = 1; i <= n; ++i) {
    fscanf(stdin, "%d", &heap[i]);
  }
  for (int i = 1; i <= n; ++i) {
    fprintf(stdout, "node %i: key = %d, ", i, heap[i]);
    if (i / 2 > 0) {
      fprintf(stdout, "parent key = %d, ", heap[i / 2]);
    }
    if (2 * i <= n) {
      fprintf(stdout, "left key = %d, ", heap[2 * i]);
    }
    if (2 * i + 1 <= n) {
      fprintf(stdout, "right key = %d, ", heap[2 * i + 1]);
    }
    fprintf(stdout, "\n");
  }
  return 0;
}