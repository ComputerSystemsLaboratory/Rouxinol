#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

int n;
static const int nmax = 2005;
static const int INFTY = (1<<21);
static const int WHITE = 0; // Not visited
static const int GRAY = 1;  // Visited
static const int BLACK = 2; // In MST
std::array<std::array<int, nmax>, nmax> adjmat;
std::array<int, nmax> d, p;
std::array<int, nmax> color;

void dijklstra(int v)
{
  color.fill(WHITE);
  d.fill(INFTY);
  p.fill(-1);

  d[v] = 0;
  color[v] = GRAY;

  while (true)
    {
      auto mincost = INFTY;

      // Find minimum cost vertex from current MST
      for (int i=0; i<n; ++i)
        {
          if (color[i] != BLACK && d[i] < mincost)
            {
              mincost = d[i];
              v = i;
            }
        }
      //std::cout << v << std::endl;
      //std::for_each(d.begin(), d.begin()+n, [](auto x){std::cout << x << ' ';});
      //std::cout << std::endl;
      // Break if no update
      if (mincost == INFTY) break;

      // Include v in MST
      color[v] = BLACK;

      // Update minimum cost outside current MST
      for (int i=0; i<n; ++i)
        {
          if ( (color[i] != BLACK) && ((d[v] + adjmat[v][i]) < d[i]))
            {
              d[i] = d[v] + adjmat[v][i];
              color[i] = GRAY;
              p[i] = v;
            }
        }
    }
}

void print_distance(int v)
{
  dijklstra(v);

  for (int i=0; i<n; ++i)
    {
      std::cout << i << " " << d[i] << std::endl;
    }
}

int main ()
{
  std::cin >> n;

  for (int i=0; i<n; ++i){
    for (int j=0; j<n; ++j)
      adjmat[i][j] = INFTY;
  }
  for (int i=0; i<n; ++i)
    {
      int u, k;
      std::cin >> u >> k;
      for (int j=0; j<k; ++j)
        {
          int v, c;
          std::cin >> v >> c;
          adjmat[u][v] = c;
        }
    }

  print_distance(0);
}

