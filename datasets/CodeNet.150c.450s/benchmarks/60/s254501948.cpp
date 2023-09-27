#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include <climits>
using namespace std;

#define DEBUG (0)

#if DEBUG
#define DPRINTF(...) do { \
    printf("D(L%d) %s: ", __LINE__, __func__); \
    printf(__VA_ARGS__); \
  } while (false)
#else
#define DPRINTF(...)
#endif // DEBUG


int main()
{
  int n;
  cin >> n; cin.ignore();

  DPRINTF("num of nodes: %d\n", n);

  bool graph[n][n];

  // init
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      graph[i][j] = 0;

  // make a graph
  for (int i = 0; i < n; i++)
  {
    int node;
    int degree;

    cin >> node >> degree;

    DPRINTF("node %d (degree %d)\n", node, degree);

    for (int j = 0; j < degree; j++)
    {
      int adj; cin >> adj;

      // note that index starts from #0 though node and adj from #1
      graph[node - 1][adj - 1] = true;
    }

    cin.ignore();
  }

  // print a graph as a matrix form
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j == 0)
        printf("%d", graph[i][j]);
      else
        printf(" %d", graph[i][j]);
    }
    cout << endl;
  }

  return 0;
}

