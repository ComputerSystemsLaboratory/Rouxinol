#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

int n;
static const int nmax = 2005;
static const int INFTY = (1 << 21);
static const int WHITE = 0; // Not visited
static const int GRAY = 1;  // Visited
static const int BLACK = 2; // In MST
std::array<std::array<int, nmax>, nmax> adjmat;
std::array<int, nmax> d, p;
std::array<int, nmax> color;

void prim()
{
  color.fill(WHITE);
  d.fill(INFTY);
  p.fill(-1);

  int v = 0;
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

      // Break if no update
      if (mincost == INFTY) break;

      // Include v in MST
      color[v] = BLACK;

      // Update minimum cost outside current MST
      for (int i=0; i<n; ++i)
        {
          if (color[i] != BLACK && adjmat[v][i] != -1 && adjmat[v][i] < d[i])
            {
              d[i] = adjmat[v][i];
              color[i] = GRAY;
              p[i] = v;
            }
        }
    }
}

int main ()
{
  std::cin >> n;
  for (int i=0; i<n; ++i)
    {
      for (int j=0; j<n; ++j)
        std::cin >> adjmat[i][j];
    }

  prim();

  int ans = 0;
  //std::for_each(d.begin(), d.begin()+n, [&](auto x){ans+=x;});
  for (int i=0; i<n; ++i)
    {
      if (p[i] != -1)
        ans += adjmat[i][p[i]];
    }
  std::cout << ans << std::endl;
}

