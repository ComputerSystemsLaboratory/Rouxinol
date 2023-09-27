#include <iostream>
#include <vector>
using namespace std;
#define MAX 100000
#define NIL -1

vector<int> G[MAX];
int c, top, S[MAX], color[MAX];

void dfs_init(int n){
  top = 0;
  for(int i=0; i<n; i++){
    color[i] = NIL;
  }
}

void dfs(int s){
  int v;
  color[s] = c;
  S[++top] = s;
  while(top > 0){
    s = S[top];
    top--;
    for(int i = 0; i<G[s].size(); i++){
      v = G[s][i];
      if(color[v] == NIL){
        S[++top] = v;
        color[v] = c;
      }
    }
  }
}

int main(void){
  int n, m, s, t, q;
  cin >> n >> m;
  for(int i=0; i<m; i++){
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  dfs_init(n);
  for(int i=0; i<n; i++){
    if(color[i] == NIL){
      dfs(i);
      c++;
    }
  }

  c = 0;
  cin >> q;
  for(int i=0; i<q; i++){
    cin >> s >> t;
    if(color[s] == color[t]) cout << "yes" << endl;
    else cout << "no" << endl;
  }

  return 0;
}

