#include<iostream>
#include<cstdio>
#include<cstring>
#define MAX 2000200
#define MIN -2000000300
#define INF 1<<30
using namespace std;
int n;
int A[1000][1000];
int d[1000];
bool used[1000];
 
void Init(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      A[i][j] = INF;
    }
  }
}
 
int prime(){
  for(int i=0;i<n;i++){
    d[i] = INF;
    used[i]=false;
  }
  int ans=0;
  d[0] = 0;
 
  while(true){
    int v = -1;
    for(int i=0;i<n;i++){
      if(!used[i] && (v == -1 || d[v] > d[i]))v = i;
    }
    if(v == -1)break;
    ans+=d[v];
    used[v] = true;   
 
    for(int i=0;i<n;i++){
      d[i] = min(d[i],A[v][i]);
    }
 
  }
  return ans;
}
 
int main(){
  scanf("%d",&n);
  //  Init(n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&A[i][j]);
      if(A[i][j] == -1)A[i][j] = INF;
    }
  }
  
  printf("%d\n",prime());
  
 
  return 0;
}