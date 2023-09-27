#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
using namespace std;
static const int MAX = 100;
int N;
int ADJ[MAX][MAX];
int depth[MAX];

enum STATUS { ACTIVE = 0, MARKED, VISITED, };
int status[MAX] = {ACTIVE};

void visit(int id) {
  status[id] = VISITED;
}
void mark(int id) {
  status[id] = MARKED;
}

void bfs(int id) {
  queue<int> q;
  q.push(id);
  depth[id] = 0;

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    visit(u);
    for (int i = 0; i < N; i++) { 
      if (ADJ[u][i] && status[i] == ACTIVE) {
        q.push(i);
        mark(i);
        depth[i] = depth[u] + 1;
      }
    }
  }
}

int main() {
  cin >> N;
  int id, nn, x;
  for (int i = 0; i < N; i++) {
    cin >> id >> nn;
    id--; // 0-based
    for (int j = 0; j < nn; j++) {
      cin >> x;
      x--; // 0-based
      ADJ[id][x] = 1;
    }
  }
  for (int i = 0; i < N; i++)
    depth[i] = -1;

  bfs(0);
  for (int i = 0; i < N; i++)
    cout << i+1 << " " << depth[i] << endl;
}