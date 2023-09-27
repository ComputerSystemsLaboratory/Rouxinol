#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
vector<vector<int>> G;
vector<int> C;
int color, n, m;

void dfs(int r) {
  C.at(r) = ++color;
  stack<int> S;
  S.push(r);
  while (S.size() > 0) {
    int u = S.top(); S.pop();
    rep(i, G.at(u).size()) {
      if (C.at(G.at(u).at(i)) == -1) {
        C.at(G.at(u).at(i)) = color;
        S.push(G.at(u).at(i));
      } 
    }
  }
}

void assing_color() {
  rep(i, n) {
    if (C.at(i) == -1){
      dfs(i);
    }
  }
}

int main() {
  cin >> n >> m;
  rep(i, n) G.push_back({});
  rep(i, n) C.push_back(-1);
  rep(i, m) {
    int a, b; cin >> a >> b;
    G.at(a).push_back(b);
    G.at(b).push_back(a);
  }
  assing_color();
  int q; cin >> q;
  rep(i, q) {
    int a, b; cin >> a >> b;
    if(C.at(a) == C.at(b)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}

