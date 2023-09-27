#include<cstdio>
#include<vector>
#include<algorithm>
#define rep(i,j) for(int i=0;i<(int)(j);i++)
using namespace std;
#define N_MAX 50000
#define M_MAX 20
const int INF=1<<30;
int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  vector<int> c(m);
  rep(i,m)scanf("%d",&c[i]);
  int DP[N_MAX+10];
  DP[0]=0;
  for(int i=1;i<=n;i++){
    DP[i]=INF;
    rep(j,m){
      if(i-c[j]>=0){
        DP[i]=min(DP[i],DP[i-c[j]]+1);
      }
    }
  }
  printf("%d\n",DP[n]);
  return 0;
}