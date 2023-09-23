#include<bits/stdc++.h>
using namespace std;
int m[101][101];
int main(){
  int n,u,k,v;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    u--; //
    for(int j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      m[u][v]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j) printf(" ");
      printf("%d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
