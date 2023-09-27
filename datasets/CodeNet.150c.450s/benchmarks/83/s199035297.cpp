#include <stdio.h>
#include <algorithm>
using namespace std;
const int MAX_N=100;
const int MAX_W=10000;
int n,W;
int v[MAX_N];
int w[MAX_N];
int dp[MAX_N+1][MAX_W+1];
void solve(){ 
   for(int i=0;i<n;i++){
       for(int j=0;j<=W;j++){
              if(j<w[i]){
            dp[i+1][j]=dp[i][j];
                        }
                else{
             dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
                   }
           }
   }

      }
int main(){
     scanf("%d%d",&n,&W);
     for(int i=0;i<n;i++){
         scanf("%d%d",&v[i],&w[i]);
         dp[i][0]=0;
         }
solve();
printf("%d\n",dp[n][W]);
return 0;
}