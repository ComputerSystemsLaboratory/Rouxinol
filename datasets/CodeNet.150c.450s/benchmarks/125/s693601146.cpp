#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

enum COLOR {
  WHITE,
  GRAY,
  BLACK,
};

static const int NIL = -1;
static const int N = 100;

static int M[N][N] = {};

static inline int next(int u, int n, int next_array[]) {
  for (int v = next_array[u]; v < n; v++) {
    next_array[u] = v + 1;
    if (M[u][v]) {
      return v;
    }
  }
  return NIL;
}

static vector<int> u(N, 0);
static vector<COLOR> color(N, WHITE);
static int total_time = 0;
static vector<int> visit_time(N, 0), finish_time(N, 0);

static void dfs_visit(int r, int n) {
  vector<int> next_array(N, 0);

  stack<int> S;
  S.push(r);
  color[r] = GRAY;
  visit_time[r] = ++total_time;

  while (!S.empty()) {
    int u = S.top();
    int v = next(u, n, &next_array[0]);
    if (v != NIL) {
      if (color[v] == WHITE) {
        color[v] = GRAY;
        visit_time[v] = ++total_time;
        S.push(v);
      }
    } else {
      S.pop();
      color[u] = BLACK;
      finish_time[u] = ++total_time;
    }
  }
}

void dfs(int n) {
  for (int u = 0; u < n; u++) {
    if (color[u] == WHITE) {
      dfs_visit(u, n);
    }
  }
  
  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << visit_time[i] << " " << finish_time[i] << endl;
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
  
  dfs(n);

  return 0;
}

