#include <cstdio>
#define N 100
int main(){
    int M[N][N];
    int n,u,k,v;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)M[i][j]=0;
}
  for(int i=0;i<n;i++){
   scanf("%d%d",&u,&k);
    u--;
    for(int j=0;j<k;j++){
       scanf("%d",&v);
        v--;
        M[u][v]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j)printf(" ");
       printf("%d",M[i][j]);
    }
   printf("\n");
  }
  return 0;
}