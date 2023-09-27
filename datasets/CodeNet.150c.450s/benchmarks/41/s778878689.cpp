#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const long long INF=2000000000;

int main(){
  int v,e; cin >> v >> e;
  int adj[v][v];
  int s,t,d;
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      if(i==j) adj[i][j]=0;
      else adj[i][j]=INF;
    }
  }
  for(int i=0;i<e;i++){
    scanf("%d %d %d",&s,&t,&d);
    adj[s][t]=d;
  }
  //warshallFloyd
  //A_k[i,j] represents the minimum cost from i to j via V_k{1,2,3,...,k}
  long long A[v][v];
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      A[i][j]=adj[i][j];
    }
  }
  for(int k=0;k<v;k++){
    for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
        if(A[i][j]<A[i][k]+A[k][j]) A[i][j]=A[i][j];
        else{
          if(A[i][k]==INF || A[k][j]==INF) A[i][j]=INF;
          else A[i][j]=A[i][k]+A[k][j];
        }
      }
    }
  }
  bool flag=1;
  for(int i=0;i<v;i++){
    if(A[i][i]<0){
      cout << "NEGATIVE CYCLE" << endl;
      flag=0; break;
    }
  }
  if(flag){
    for(int i=0;i<v;i++){
      for(int j=0;j<v-1;j++){
        if(A[i][j]==INF) cout << "INF" << " ";
        else cout << A[i][j] << " ";
      }
      if(A[i][v-1]==INF) cout << "INF" << endl;
      else cout << A[i][v-1] << endl;
    }
  }
}