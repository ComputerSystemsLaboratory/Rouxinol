#include <iostream>
#include <queue>
#define INFTY -1
using namespace std;



int a[124][124] = {{}};
int d[124] = {};
int n;
void bfs(int k){
  queue <int> q;
  q.push(k);
  int u;


  while(!q.empty()){
    u = q.front(); q.pop();
    for(int v = 0;v < n;v++){
      if(a[u][v] == 0) continue;
      if(d[v] == INFTY) {
        d[v] = d[u] + 1;
        q.push(v);
        //cout << v << " " << d[v] << endl;
      }
    }

  }
}

int main(){

  int u,k,x;
  cin >> n;

d[0] = 0;
for(int i = 1; i < n;i++) d[i] = INFTY;

  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      cin >> x;
      a[u - 1][x - 1] = 1;
    }
  }

  bfs(0);

  for(int i = 0;i < n;i++){
    cout << i + 1 << " " << d[i] << endl;
  }
}