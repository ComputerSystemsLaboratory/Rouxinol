#include <iostream>

using namespace std;


static const int white = 0;
static const int black = 1;
static const int emp = -1;
static const int inf = 1000000;

int graph[124][124] = {{}};
int d[124] = {};
int n;



void dijkstra(){

  int u,mincost;
  int p[124] = {};
  int color[124] = {};

  for(int i = 0;i < n;i++){
    d[i] = inf;
    color[i] = white;
    p[i] = emp;
  }

  d[0] = 0;

  while(1){

    mincost = inf;
    for(int i = 0;i < n;i++){
      if(color[i] != black && mincost > d[i]){
	mincost = d[i];
	u = i;
      }
    }
    //  cout << "u =  " << u << endl;

    if(mincost == inf) break;
    color[u] = black;

    for(int i = 0;i < n;i++){
      if(color[i] != black && graph[u][i] != emp){
	if(d[u] + graph[u][i] < d[i]){
	  d[i] = d[u] + graph[u][i];
	  p[i] = u;
	}
      }
    }
  }
}


int main(){

  int u,k,ui,c;
  cin >> n;



  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      graph[i][j] = emp;
    }
  }


  for(int i = 0;i < n;i++){

    cin >> u >> k;
    for(int j = 0;j < k;j++){
      cin >> ui >> c;
      graph[u][ui] = c;
    }
  }


  dijkstra();

  for(int i = 0;i < n;i++){
    cout << i << ' ' << d[i] << endl;
  }

}