#include<bits/stdc++.h>
using namespace std;

#define req(i,j) for(int i=0;i<j;i++)

int n,m;

int coin[20];

int dp[50001][21];

int rec(int i,int j){

  if(dp[i][j] >= 0){
    return dp[i][j];
  }

  if(j == m){
    return dp[i][j] = 50001;
  }

  if(i == 0){
    return dp[i][j] = 0;
  }

  if(coin[j] > i){
    return dp[i][j] = rec(i,j+1);
  }

  int rec1 = rec(i,j+1);
  int rec2 = rec(i-coin[j],j) + 1;

  return  dp[i][j] = min(rec1,rec2);

}

int main(){

    cin >> n >> m;

    req(i,m){
      cin >> coin[i];
    }

    req(i,n+1){
      req(j,m+1){
        dp[i][j] = -1;
      }
    }

    cout << rec(n,0) << endl;

    return 0;
}