#include<cstdio>
#include<iostream>
using namespace std;

int main(){

  int N,u,k,v;
  cin>>N;
  int graph[N][N];

  //init
  for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
      graph[i][j]=0;

  for(int i=0;i<N;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v;
      graph[u-1][v-1]=1;
    }
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout<<graph[i][j];
      if(j==N-1) cout<<endl;
      else cout<<" ";
    }
  }
  return 0;
}