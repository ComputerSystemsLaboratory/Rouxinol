#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
  int N,X,Y;
  char x[1024],y[1024];
  int dp[1024][1024];
  scanf("%d",&N);
  while(N--){
    scanf("%s%s", x, y);
    X = strlen(x); Y = strlen(y);
    memset(dp, 0, sizeof dp);
    for(int i=0;i<X;i++){
      for(int j=0;j<Y;j++){
	if(x[i]==y[j]) dp[i+1][j+1] = dp[i][j]+1;
	else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
      }
    }
    printf("%d\n", dp[X][Y]);
  }
  return 0;
}