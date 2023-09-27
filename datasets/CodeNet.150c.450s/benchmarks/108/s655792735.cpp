#include <cstdio>
#include <queue>
#include <vector>

int main()
{
  int n;
  scanf("%d", &n);

  std::vector<std::vector<int>> graph;
  graph.resize(n);
  for (int i = 0; i < n; ++i)
  {
    int u, k, v;
    scanf("%d%d", &u, &k);
    for (int j = 0; j < k; ++j)
    {
      scanf("%d", &v);
      graph[u - 1].push_back(v - 1);
    }
  }

  std::queue<int> vertex;
  vertex.push(0);
  int current_distance = 0;

  int distances[100];
  for (int i = 0; i < 100; ++i)
    distances[i] = -1;

  while (vertex.size() > 0)
  {
    int s = vertex.size();

    // Loop for current depth
    for (int i = 0; i < s; ++i)
    {
      int id = vertex.front();
      vertex.pop();

      if (distances[id] == -1)
        distances[id] = current_distance;

      std::vector<int>::const_iterator itr;
      for (itr = graph[id].begin(); itr != graph[id].end(); ++itr)
      {
        if (distances[*itr] == -1)
          vertex.push(*itr);
      }
    }

    ++current_distance;
  }

  for (int i = 0; i < n; ++i)
    printf("%d %d\n", i + 1, distances[i]);

  return 0;
}
