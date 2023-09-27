#include <algorithm>
#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;
static const int MAX = 100;

int adj[MAX][MAX] = {0};
int n;

enum Color {
  WHITE,
  GRAY,
  BLACK,
};

struct node {
  Color color;
  int begin;
  int end;
};

node nodes[MAX];

void paint(int id, Color c) {
  static int time = 1;
  nodes[id].color = c;
  if (c == GRAY)
    nodes[id].begin = time;
  else if (c == BLACK)
    nodes[id].end = time;
  time++;
}

int next(int id) {
  for (int i = 0; i < n; i++) {
    if (adj[id][i] == 1 && nodes[i].color == WHITE) {
      return i;
    }
  }
  return -1;
}

void visit(int id) {
  stack<int> S;
  S.push(id);
  paint(id, GRAY);

  while (!S.empty()) {
    int u = S.top();
    int v = next(u);
    if (v > -1) {
      paint(v, GRAY);
      S.push(v);
    } else {
      S.pop();
      paint(u, BLACK);
    }
  }
}

void dfs() {
  for (int i = 0; i < n; i++) {
    nodes[i].color = WHITE;
  }
  for (int i = 0; i < n; i++) {
    if (nodes[i].color == WHITE)
      visit(i);
  }
}

void printNode(int i) {
  printf("%d %d %d\n", i+1, nodes[i].begin, nodes[i].end);
}

int main() {
  cin >> n;
  int id, nn, x;
  for (int i = 0; i < n; i++) {
    cin >> id >> nn;
    id--; // 0-based
    for (int j = 0; j < nn; j++) {
      cin >> x;
      x--; // 0-based
      adj[id][x] = 1;
    }
  }

  dfs();

  for (int i = 0; i < n; i++) {
    printNode(i);
  }
}