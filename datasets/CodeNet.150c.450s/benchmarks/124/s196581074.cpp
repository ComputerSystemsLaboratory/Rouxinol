#include <iostream>
using namespace std;

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val) {
  std::fill((T*)array, (T*)(array + N), val);
}

const int INF = (1 << 21);

int n;
int m[100][100];

void dijikstra()
{
  int minv;
  int d[100], color[100];

  fill(d, d + 100, INF);
  fill(color, color + 100, 0);

  d[0] = 0;
  color[0] = 1;
  while (true) {
    minv = INF;
    int u = -1;
    for (int i = 0; i < n; i++) {
      if (minv > d[i] && color[i] != 2) {
        u = i;
        minv = d[i];
      }
    }
  
    if (u == -1) break;
    color[u] = 2;
  
    for (int v = 0; v < n; v++) {
      if (color[v] != 2 && m[u][v] != INF) {
        if (d[v] > d[u] + m[u][v]) {
          d[v] = d[u] + m[u][v];
          color[v] = 1;
        }
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl;
  }
}

signed main()
{
  int k, u, v, c;

  Fill(m, INF);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v >> c;
      m[u][v] = c;
    } 
  }

  dijikstra();

  return (0);
}