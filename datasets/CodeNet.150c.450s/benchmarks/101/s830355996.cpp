#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main()
{
  int n, m, v1, v2;
  scanf("%d%d", &n, &m);
  vector<int> v[100000];

  for (int i = 0; i < m; i++)
  {
    scanf("%d%d", &v1, &v2);
    v[v1].push_back(v2);
    v[v2].push_back(v1);
  }

  int group[n];
  for (int i = 0; i < n; i++)
    group[i] = -1;

  for (int i = 0, id = 0; i < n; i++, id++)
  {
    queue<int> que;
    if (group[i] == -1)
      que.push(i);
    while (!que.empty())
    {
      int x = que.front();
      que.pop();
      group[x] = id;
      for (int j = 0; j < v[x].size(); j++)
        if (group[v[x][j]] == -1)
          que.push(v[x][j]);
    }
  }

  int q;
  scanf("%d", &q);

  for (int i = 0; i < q; i++)
  {
    scanf("%d%d", &v1, &v2);
    if (group[v1] != -1 && group[v1] == group[v2])
      printf("yes\n");
    else
      printf("no\n");
  }

  return 0;
}