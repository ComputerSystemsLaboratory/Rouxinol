#include<queue>
#include<stack>
#include<math.h>
#include<cmath>
#include<bitset>
#include<stdio.h>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<utility>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int main(){
  const int INF=2000000000;
  int n,dp[100010],i,a;
  scanf("%d\n",&n);
  for(i=0;i<=n;i++){
    dp[i]=INF;
  }
  for(i=0;i<n;i++){
    scanf("%d\n",&a);
    int min=-1,max=n,mid;
    while(abs(min-max)>1){
      mid=(min+max)/2;
      if(a<=dp[mid]){
        max=mid;
      }
      else{
        min=mid;
      }
    }
    dp[max]=a;
  }
  for(i=0;i<n;i++){
    if(dp[i]==INF){
      break;
    }
  }
  printf("%d\n",i);
  return 0;
}
