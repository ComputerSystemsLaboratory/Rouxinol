#include <iostream>

using namespace std;

int graph[101][101]={};
int d[101]={};
int f[101]={};
int n,v,k,time1 = 0,sw[101] = {};


void dfs1(int u){

  sw[u] = 1;
  d[u] = ++time1;

  for(int i = 1; i <= n; i++){
    if( graph[u][i] == 1 && sw[i] == 0 ){
     dfs1(i);
    }

  }
    f[u] = ++time1;
}


int main(){
  int u;
  cin >> n ;
  //グラフをつくる
  for(int i = 0; i < n; i++){
    cin >> u >> k ;
    for(int j = 0; j < k ; j++){
      cin >> v;
      graph[u][v] = 1;
    }
  }
 
 for(int i = 1; i <= n; i++){
    if(sw[i] == 0){
      dfs1(i);
	}
  }

  for(int i = 1; i <= n; i++ ){
    cout << i << ' ' <<  d[i]<< ' ' << f[i] << endl;

  }
}