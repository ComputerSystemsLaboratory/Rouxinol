#include <cstdio>
#define REP0(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int n,a,b,x;
  int V[100][100]={0};
  scanf("%d",&n);
  REP0(i,n){
    scanf("%d %d",&a,&b);
    REP0(j,b){
      scanf("%d",&x);
      V[a-1][x-1]=1;
    }
  }
  REP0(i,n){
    REP0(j,n){
      if(j) printf(" ");
      printf("%d",V[i][j]);
    }
    printf("\n");
  }
  return 0;
}