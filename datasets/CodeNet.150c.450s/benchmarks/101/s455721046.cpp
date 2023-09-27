#include<iostream>
#include<vector>
#include<stack>
using namespace std;
#define MAX 100000
#define NIL -1

int n;
vector<int> G[MAX];
int color[MAX];


void dfs(int r, int c) {
  stack<int> S;
  int i, v, u;
  S.push(r);
  color[r]=c;
  while (! S.empty()) {
    u=S.top();
    S.pop();
    for (i=0; i<G[u].size(); i++) {
        v=G[u][i];
      if (color[v]==NIL) {
        color[v]=c;
        S.push(v);
      }
    }
  }
}



void assignColor() {
  int i, u;
  int id=1;
  for (i=0; i<n; i++) color[i]=NIL;
  for (u=0; u<n; u++) {
    if (color[u]==NIL)
      dfs(u, id++);
  }
}

int main() {

  int  m, i, j, v, s, t, q;

  cin >> n >> m;

  for (i=0; i<m; i++) {
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  assignColor();

  cin >> q;

  for (i=0; i<q; i++) {
    cin >> s >> t;
    if (color[s]== color[t]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;

}