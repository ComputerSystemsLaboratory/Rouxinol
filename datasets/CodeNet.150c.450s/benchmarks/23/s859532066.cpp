#include <cstdio>
#define REP(I,n) for(int i=2;i<=n;i++)
using namespace std;
int main(){
  int n;
  int F[45]={0};
  scanf("%d",&n);
  F[0]=F[1]=1;
  REP(i,n) F[i]=F[i-1]+F[i-2];
  printf("%d\n",F[n]);
  return 0;
}