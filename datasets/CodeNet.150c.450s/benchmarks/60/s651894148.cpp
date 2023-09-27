#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Graph
{
  public:
    Graph(int n);

    void Show() const;

  private:
    vector<vector<int>> m_graph;
};

Graph::Graph(int n) :
  m_graph(n, vector<int>(n, 0))
{
  for (int i = 0; i < n; ++i)
  {
    int u, k;
    cin >> u >> k;
    vector<int> list(k);
    for (int j = 0; j < k; ++j)
    {
      cin >> list[j];
    }

    for (auto v : list)
    {
      m_graph[u-1][v-1] = 1;
    }
  }
}

void Graph::Show() const
{
  for (auto a: m_graph)
  {
    for (int i = 0, size = a.size(); i < size; ++i)
    {
      cout << a[i];
      if (i != size - 1)
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main(void)
{
  int n;
  cin >> n;

  Graph graph(n);
  graph.Show();
  return 0;
}