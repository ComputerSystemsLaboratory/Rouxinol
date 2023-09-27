#include <iostream>

#define MAX_N 20
#define MAX_M 2015

int main(){
  int n,q,a[MAX_N],x;
  std::cin >> n;
  for(int i = 0 ; i < n ; i++){
    std::cin >> a[i];
  }
  bool dp[MAX_M] = {0}; dp[0] = true;
  for(int i = 0 ; i < n ; i++){
    for(int j = MAX_M-1 ; j >= 0 ; j--){
      if(dp[j] && j+a[i] < MAX_M){
        dp[j+a[i]] = true;
      }
    }
  }
  std::cin >> q;
  for(int i = 0 ; i < q ; i++){
    std::cin >> x;
    std::cout << (dp[x] ? "yes" : "no") << std::endl;
  }
  return 0;
}