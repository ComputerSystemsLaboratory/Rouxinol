#include<iostream>
#include<vector>
#include<stack>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
static const int N=100000;
static const int NIL=-1;

int n,m,q;
vector<int> G[N];
int color[N];

void dfs(int r, int c) {
  stack<int> S;
  S.push(r);
  color[r]=c;
  while (!S.empty()) {
    int u=S.top();
    S.pop();
    rep(i, G[u].size()) {
      int v=G[u][i];
      if (color[v]==NIL) {
        color[v]=c;
        S.push(v);
      }
    }
  }
}

void assignColor() {
  int id=1;
  rep(i, n) color[i]=NIL;
  rep(u, n) {
    if (color[u]==NIL) dfs(u, id++);
  }
}

int main() { 
  cin>>n>>m;
  rep(i, m) {
    int s,t; cin>>s>>t;
    G[s].push_back(t);
    G[t].push_back(s);
  }
  assignColor();
  cin>>q;
  vector<int> X(q), Y(q);
  rep(i, q) cin>>X[i]>>Y[i];
  rep(i, q) {
    if (color[X[i]]==color[Y[i]]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}
