#include <cmath>
#include <queue>
#include <iostream>
using namespace std;

int G[110][110] = {0};
int n;
int D[110] = {0};
void bfs(int src){
 queue<int> Q;
 Q.push(src);
 D[src] = 0;
 while(! Q.empty()){
  int cur = Q.front();
  Q.pop();
  for(int i=1; i<=n; i++){
   if(G[cur][i]==1 && D[i]==0 && i!=1){
    D[i] = D[cur]+1;
    Q.push(i);
   }
  }
 }

 for(int i=1; i<=n; i++){
  if(i!=1 && D[i]==0){
   D[i]=-1;
  }
  cout << i << " " << D[i] << endl;
 }
}

int main(){
 cin >> n;
 int u, k;
 int v[100000];
 for(int i=0; i<n; i++){
  cin >> u >> k;
  for(int j=0; j<k; j++){
   cin >> v[j];
   G[i+1][v[j]] = 1;
  }
 }
 bfs(1);
}