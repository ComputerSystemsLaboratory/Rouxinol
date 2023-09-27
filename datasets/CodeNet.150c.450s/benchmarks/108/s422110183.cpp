#include<iostream>
#include<algorithm>
using namespace std;

int head, tail;
int Q[100000];
int n, d[110];
bool a[110][110] = {};

void enqueue(int x){
  
  Q[tail] = x;

  if(tail + 1 == 100000) tail = 0;
  else tail++;
}

int dequeue(){
  
  int x = Q[head];

  if(head + 1 == 100000) head = 0;
  else head++;

  return x;
}

void bfs(int u){
  
  // queue<int> Q;
  
  enqueue(u);
  d[u] = 0;
  
  while(head != tail){
    int p = Q[head];
    dequeue();
    
    for(int i = 2;i <= n;i++){
      if(a[p][i] && d[i] == 0){
        enqueue(i);
        d[i] = d[p] + 1;
      }
    }
  }
}

int main(){
  
  int u, k, v;
  
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      cin >> v;
      a[u][v] = true;
    }
  }
  
  bfs(1);
  
  for(int i = 1;i <= n;i++){
    if(d[i] || i == 1) cout << i << " " << d[i] << endl;
    else cout << i << " " << -1 << endl;
  }
  
  return 0;
}
