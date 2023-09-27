#include<bits/stdc++.h>
using namespace std;
#define int long long 

struct edge{ int from,to,cost;};

int N,M;

const int INF = 1LL << 60;

int d[2020];

edge E[2020];

void Bellmanford(const int &a){
  
  for(int i = 0; i < N; i++){
    d[i] = INF;
  }
  
  d[a] = 0;
  
  for(int k = 0; k < N; k++){
    
    bool update = false;
    
    for(int i = 0; i < M; i++){ 
    
    if( d[E[i].from] != INF && d[E[i].to] > d[E[i].from]+E[i].cost ){
      d[E[i].to] = d[E[i].from]+E[i].cost;
      update  = true;
    }
  }
  
    if(update && k == N-1){ 
      cout << "NEGATIVE CYCLE" << endl; 
      exit(0);
    }
    
  }
  
  for(int i = 0; i < N; i++){ 
    int res = d[i];
    if(res == INF){ cout << "INF" << endl;}
    else{ cout << res << endl;}
  }
 
  return ;
}
    
    

signed main(void){
  
  int r; 
  
  cin >> N >> M >> r;
  
  for(int i = 0; i < M; i++){ 
    
    cin >> E[i].from >> E[i].to >> E[i].cost;
    
  }
  
  
  Bellmanford(r);
  
  return 0;
}
  
