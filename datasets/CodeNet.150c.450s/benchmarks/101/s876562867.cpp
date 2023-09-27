#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int n, m;
int d[100000];
int t = 0;
int c[100000];
queue<int> q;
vector<int> v[100000];
int ans = 2;

void bfs(int u){
  q.push(u);
  c[u] = 1;

  while(q.empty() == 0){
    u = q.front();
    q.pop();
    for(int i = 0; i < v[u].size(); i++){
      if(c[v[u][i]] == 0){
        q.push(v[u][i]);
        c[v[u][i]] = 1;
      }

    }
    c[u] = ans;
  }

}


int main(){

  cin >> n;

  for(int i = 0; i < n; i++){
    c[i] = 0;
  }

  cin >> m;

  for(int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }

  for(int i = 0; i < n; i++){
    if(c[i] == 0){
      bfs(i);
      ans++;
    }
  }

  int q;
  cin >> q;

  for(int i = 0; i < q; i++){
    int x, y;
    cin >> x >> y;
    if(c[x] == c[y]) cout << "yes" << endl;
    else cout << "no" << endl;
  }

  return 0;
}
