#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define INF 200001 
using namespace std;
int n;
int A[1000][1000];
int D[1000][1000];
 
void Init(int f){
  for(int i=0;i<f;i++){
    for(int j=0;j<f;j++)D[i][j] = INF;
  } 
}
 
int main(){
  scanf("%d",&n);
  int u,k,C,V;
  Init(n);
  
  for(int i=0;i<n;i++){
      scanf("%d %d",&u,&k);    
      for(int j=0;j<k;j++){
    scanf("%d %d",&V,&C);
    D[u][V] = C;
   
      }    
  }
  for(int i=0;i<n;i++)D[i][i] = 0;

  for(int k=0;k<n;k++)for(int i=0;i<n;i++)for(int j=0;j<n;j++)D[i][j]= min(D[i][j],D[i][k] + D[k][j]);

  for(int i=0;i<n;i++){
    printf("%d %d\n",i,D[0][i]);
  }
 
  return 0;
}