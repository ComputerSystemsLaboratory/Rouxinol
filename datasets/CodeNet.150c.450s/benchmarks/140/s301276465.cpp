#include<bits/stdc++.h>
using namespace std;
#define int long long 

int N,M;

int par[101010];

void init(const int n){ 
  for(int i = 0; i < n; i++){ par[i] = i;}
}

int root(int a){ 
  if( a == par[a]){ return a;}
  else{ return par[a] = root(par[a]);}
}

bool issame(int a, int b){
  return root(a) == root(b);
}

void unite(int a, int b){ 
  if( issame(a,b) ){ return ;}
  else{
    par[root(a)] = root(b);
  }
}

struct edge{int u,v,val;};

bool comp(edge a, edge b){
  return a.val < b.val;
}

edge E[101010];

int Kruscal(){ 
  
  int sum = 0;
  
  sort(E,E+M,comp);
  
  for(int i = 0; i < M; i++){ 
    int a = E[i].u; int b = E[i].v;
    
    if( issame(a,b) ){ continue;}
    
    unite(a,b);
    
    sum += E[i].val;
    
  }
  
  return sum;
}
  
      

signed main(void){
  
  cin >> N >> M;
  init(N);
  
  for(int i = 0; i < M; i++){
    cin >> E[i].u >> E[i].v >> E[i].val;
  }
  
  cout << Kruscal() << endl;
  
  return 0;
}
