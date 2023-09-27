#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

int n;
int g[101][101] = {};
int sp[101] = {};


void bfs(){

  queue<int> q;
  q.push(1);

  while( !q.empty() ){
    int v = q.front(); q.pop();
    for(int i=1; i<=n; i++){
      if(g[v][i] == 1 && sp[i] == -1){
	q.push(i);
	sp[i] = sp[v]+1;
      }
    }
  }
}


int main(){

  memset(g,0,sizeof(g));
  memset(sp,-1,sizeof(sp));
  cin >> n;
  sp[1] = 0;

  for(int i=1; i<=n; i++){
    int u,v,k;
    cin >> u >> k;
    for(int j=0; j<k; j++){
      cin >> v;
      g[u][v] = 1;
    }
  }

  bfs();

  for(int i=1; i<=n; i++)
    cout << i << " " << sp[i] << endl;

}