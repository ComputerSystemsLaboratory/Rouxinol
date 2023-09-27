#include<iostream>
#include<stack>

using namespace std;

static const int N = 100;
static const int UNVISITED = 0;
static const int VISITING = 1;
static const int VISITED = 2;


int n;
int A[N][N];
int d[N];
int f[N];
int states[N];
int nt[N];
int t;

int next(int u){
  for(int v = nt[u];v < n;v++){
    nt[u] = v + 1;
    //cout << nt[u] << '\n';
    if(A[u][v]) return v;
  }
  return -1;
}

void dfs_visit(int x){
  for(int i = 0;i < n;i++){
    nt[i] = 0;
  }
  
  stack<int> s;
  s.push(x);
  states[x] = VISITING;
  d[x] = ++t;
  
  while(!s.empty()){
    int u = s.top();
    int v = next(u);
    //cout << "u:" << u << " v:" << v << '\n';
    if(v != -1){
      if(states[v] == UNVISITED){
	states[v] = VISITING;
	d[v] = ++t;
	s.push(v);
      }
    }else{
      s.pop();
      states[u] = VISITED;
      f[u] = ++t;
    }
  }
}

void dfs(){
  for(int i = 0;i < n;i++){
    states[i] = UNVISITED;
  }

  t = 0;

  for(int u = 0;u < n;u++){
    if(states[u] == UNVISITED) dfs_visit(u);
  }
  for(int i = 0;i < n;i++){
    cout << i + 1 << " " << d[i] << " " << f[i] << '\n';
  }
}
         
int main(){ 
  cin >> n;
  
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      A[i][j] = 0;
    }
  }
  
  int k,u,v;
  
  for(int i = 0;i < n;i++){
    cin >> u >> k;
    u--;
    for(int j = 0;j < k;j++){
      cin >> v;
      v--;
      A[u][v] = 1;
    }
  }

  dfs();

  return 0;
}


