#include<bits/stdc++.h>  
using namespace std;
int main(){
  int n, dp[100001], a[100001];
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  fill_n( dp, n, 1e9+1);
  for(int i = 0; i < n; i++){
    *lower_bound( dp, dp + n, a[i]) = a[i];
  }
  cout << distance( dp, lower_bound( dp, dp + n, 1e9+1)) << endl;
}