#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int dp[1001][1001];
int q;

void solve(){
  char x[1001],y[1001];
  scanf("%s %s",x,y);
  int lx = strlen(x);
  int ly = strlen(y);
  for(int i=0;i<=lx;i++){
    for(int j=0;j<=ly;j++){
      if(i==0||j==0) dp[i][j] = 0;
      else if(x[i-1]==y[j-1]) dp[i][j] = dp[i-1][j-1]+1;
      else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
    }
  }
  printf("%d\n",dp[lx][ly]);
  return;
}


int main(){
  scanf("%d",&q);
  for(int i=0;i<q;i++) solve();
  return 0;
}