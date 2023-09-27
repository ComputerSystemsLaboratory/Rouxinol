#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define NIL -1

int c = 0,n,m;
int color[100000];
vector<int> li[100000];

void dfs(int r,int c) {
  stack<int> S;
  S.push(r);
  color[r] = c;
  while(!S.empty()) {
    int u = S.top();
    S.pop();
    for(int i = 0;i < li[u].size();i++) {
      if(color[li[u][i]] == NIL) {
        S.push(li[u].at(i));
        color[li[u][i]] = c;
      }
    }
  }
}

void assignColor() {
  for(int i = 0;i < n;i++) {
    if(color[i] == NIL) dfs(i,c++);
  }
}



int main() {

  
  cin >> n >> m;


  for(int i = 0;i < m;i++) {
    int a,b;
    cin >> a >> b;
    li[a].push_back(b);
    li[b].push_back(a);
  }

  for(int i = 0;i < n;i++) {
    color[i] = NIL;
  }

  int q;
  cin >> q;

  assignColor();

  for(int i = 0;i < q;i++) {
    int a,b;
    cin >> a >> b;
    cout << ((color[a] == color[b]) ? "yes" : "no") << endl;
  }


}



