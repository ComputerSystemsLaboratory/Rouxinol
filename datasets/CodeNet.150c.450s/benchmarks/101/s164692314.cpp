#include<iostream>
#include<cstdlib>
using namespace std;
int *graph[100000],num,stack[200000],top,used[100000],gsize[100000];
void dfs(int x) {
  stack[top++] = x;
  used[x] = num;
  while (top != 0) {
    int y = stack[--top];
    for (int i = 0; i < gsize[y]; ++i) {
      int ver = graph[y][i];
      if (used[ver] == 0) {
	used[ver] = num;
	stack[top++] = ver;
      }
    }
  }
}
int main() {
  int n, m, q; cin >> n >> m;
  int ver1[100000], ver2[100000], size[100000] = {};
  for (int i = 0; i < m; ++i) {
    cin >> ver1[i] >> ver2[i];
    ++size[ver1[i]]; ++size[ver2[i]];
  }
  for (int i = 0; i < n; ++i) graph[i] = (int *)malloc(sizeof(int)*size[i]);
  for (int i = 0; i < m; ++i) {
    graph[ver1[i]][gsize[ver1[i]]++] = ver2[i];
    graph[ver2[i]][gsize[ver2[i]]++] = ver1[i];
  }
  for(int i=0;i<n;++i)
    if (used[i] == 0) {
      ++num; dfs(i);
    }
  cin >> q;
  for (int i = 0; i < q; ++i) {
    int s, t; cin >> s >> t;
    cout << (used[s] == used[t] ? "yes" : "no") << endl;
  }
  for (int i = 0; i < n; ++i) free(graph[i]);
  return 0;
}

