#include <bits/stdc++.h>

using namespace std;

#define MAX 100
int INFTY = (1<<21);
int num,M[MAX][MAX];
int d[MAX];

void bfs(int s){
  queue<int> q;
  q.push(s);
  int u,i,v;
  for( i = 0; i < num; i++){
    //d[i] = INFINITY;
    d[i] = INFTY;
  }
  d[s] = 0;
  while( !q.empty()){
    u = q.front();
    q.pop();
  for(v = 0; v < num; v++){
    if( M[u][v] == 0){
      continue;
    }
    //if( d[v] != INFINITY){
    if( d[v] != INFTY){
      continue;
    }
    d[v] = d[u]+1;
    q.push(v);
  }
  }
  for(i = 0; i < num; i++){
    //cout << i+1 << " ";
    /*
    if(d[i] == INFINITY){
      cout << (-1);
    }
    else{
      cout << d[i] << endl;
    } 
    */
    cout << i+1 << " " << ( (d[i] == INFTY) ? (-1) : d[i] ) << endl;
  }
}

int main(){
  int u,k,v,i,j;
  cin >> num;
  for(i = 0; i < num; i++){
    for(j = 0; j < num; j++){
      M[i][j] = 0;
    }
  }

  for(i = 0; i < num; i++){
    cin >> u >> k;;
    u--;
    for(j = 0; j < k; j++){
      cin >> v;
      v--;
      M[u][v] = 1;
    }
  }
  bfs(0);
  return 0;
}