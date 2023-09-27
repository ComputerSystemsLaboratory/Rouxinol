/* knapsack Problem */
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define rep(i,j) for(int (i)=0;(i)<(j);(i)++)


#define N_MAX 100 +10
#define W_MAX 10000 +10
int main()
{
  ios::sync_with_stdio(false);
  int N,W;
  cin >> N >> W;
  vector<int> value(N+1),weight(N+1);
  for(int i=1;i<=N;i++){
    cin >> value[i] >> weight[i];
  }
  int DP[N_MAX][W_MAX]={};
  for(int n=1;n<=N;n++){
    rep(w,W+1){
      if(weight[n]<=w){
        DP[n][w]=max(DP[n-1][w],DP[n-1][w-weight[n]]+value[n]);
      }else{
        DP[n][w]=DP[n-1][w];
      }
    }
  }
  cout<<DP[N][W]<<endl;
  
  return 0;
}