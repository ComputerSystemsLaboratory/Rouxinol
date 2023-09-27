#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int a,n,k,m[150][150];
  for(int i=0;i<150;i++)for(int j=0;j<150;j++)m[i][j]=1000000;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>k;
    for(int j=0;j<k;j++){
      cin>>a;
      cin>>m[i][a];
    }
  }
  int dist[100]={};
  int visited[100]={};
  for(int i=1;i<100;i++)dist[i]=1000000;
  while(1){
    int i=-1;
    for(int j=0;j<n;j++){
      if(visited[j]==0){
	if(i==-1||dist[i]>dist[j]){
	  i=j;
	}
      }
    }
    if(i==-1)break;
    visited[i]=1;
    for(int j=0;j<n;j++){
      int A=dist[i]+m[i][j];
      if(dist[j]>A){
	dist[j]=A;
      }
    }
  }
  for(int i=0;i<n;i++)printf("%d %d\n",i,dist[i]);
  return 0;
}