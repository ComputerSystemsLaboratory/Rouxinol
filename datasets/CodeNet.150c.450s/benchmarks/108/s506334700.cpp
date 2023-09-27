#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

enum COLOR {
  WHITE,
  GRAY,
  BLACK,
};

static const int INFTY = INT_MAX;
static const int N = 100;

static int M[N][N] = {};
static vector<COLOR> color(N, WHITE);
static vector<int> d(N, INFTY);

static void bfs(int n, int s) {
  color[s] = GRAY;
  d[s] = 0;

  queue<int> Q;
  Q.push(s);

  while (!Q.empty()) {
    int u = Q.front();
    Q.pop();
    for (int v = 0; v < n; v++) {
      if (M[u][v] && color[v] == WHITE) {
          color[v] = GRAY;
          d[v] = d[u] + 1;
          Q.push(v);
      }
      color[u] = BLACK;
    }
  }
}

int main() {
  int n;
  cin >> n;

  int number, count, value;
  for (int i = 0; i < n; i++) {
    cin >> number >> count;
    number--;
    for (int j = 0; j < count; j++) {
     cin >> value;
     value--;
     M[number][value] = 1; 
    }
  }
  
  bfs(n, 0);
  
  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << ((d[i] == INFTY) ? -1 : d[i]) << endl; 
  }

  return 0;
}

