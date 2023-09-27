#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;


int main(){

   int N,W;
   int weight[110],value[110];

   int dp[110][10010];

   std::cin >> N>>W;
   for(int i=0;i<N;i++) std::cin >> value[i]>>weight[i];

   for(int i=0;i<=W;i++) dp[0][i]=0;


   for(int i=0;i<N;i++){
     for(int w=0;w<=W;w++){
       if(w>=weight[i]) dp[i+1][w]=max(dp[i][w-weight[i]]+value[i],dp[i][w]);
       else dp[i+1][w]=dp[i][w];
     }
   }

std::cout << dp[N][W] << '\n';



return 0;



}

