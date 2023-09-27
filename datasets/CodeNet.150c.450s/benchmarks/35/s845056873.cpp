#include<iostream>
using namespace std;

int64_t a[5000];
int64_t dp[2][5000];

int64_t solve(int n){
  int64_t summax=INT64_MIN;
  for(int i=0;i<n;i++){
    if(summax < a[i]){
      summax = a[i];
    }
  }

  for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
      dp[i%2][j] = dp[(i-1)%2][j] + a[i+j];

      if(summax < dp[i%2][j]){
        summax = dp[i%2][j];
      }
    }
  }
  return summax;
}

int main(){
  int64_t n;
  while(cin >> n,n!=0){

    for(int i=0;i<n;i++){
      cin >> a[i];
      dp[0][i] = a[i];
    }

    cout << solve(n) << endl;
  }
  return 0;
}