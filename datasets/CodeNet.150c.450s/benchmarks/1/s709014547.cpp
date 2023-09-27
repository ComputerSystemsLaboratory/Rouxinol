#include <bits/stdc++.h>
using namespace std;

#define INF (1<<30)

int N;
int a[100005];
int dp[100005];

int main(){

  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  
  fill(dp,dp+N,INF);

  for(int i = 0; i < N; i++){
    *lower_bound(dp,dp+N,a[i]) = a[i];
  }

  cout << lower_bound(dp,dp+N,INF) - dp << endl;



}