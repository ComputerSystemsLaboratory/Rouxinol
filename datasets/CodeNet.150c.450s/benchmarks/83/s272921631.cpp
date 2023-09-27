/* knapsack Problem */
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define rep(i,j) for(int (i)=0;(i)<(j);(i)++)

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
  int DP[W_MAX]={};
  for(int n=1;n<=N;n++){
    for(int w=W;w-weight[n]>=0;w--){ //?????? ?????????
      DP[w]=max(DP[w],DP[w-weight[n]]+value[n]);
    }
  }
  cout<<DP[W]<<endl;
  
  return 0;
}