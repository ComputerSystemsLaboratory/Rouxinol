#include <iostream>
#include <cstdio> 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
using namespace std;
/*---------------------------------------------------*/

int n,u,k,v;
int g[105][105];

int main(){
  scanf("%d",&n);

  rep(i,n){
    scanf("%d%d",&u,&k);
    rep(i,k){
      scanf("%d",&v);
      g[u][v]=1;
    }
  }
  
  REP(i,1,n+1){
    printf("%d",g[i][1]);
    REP(j,2,n+1){
      printf(" %d",g[i][j]);
    }
    printf("\n");
  }
  return 0;
}