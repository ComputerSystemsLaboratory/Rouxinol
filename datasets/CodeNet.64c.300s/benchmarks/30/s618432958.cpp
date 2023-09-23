#include<bits/stdc++.h>
using namespace std;

int main(){
  int coin[] = {500, 100, 50, 10, 5, 1};
  int n;
  while(std::cin >> n, n){
    int p = 0, ans = 0;
    n = 1000 - n;
    while(n != 0){
      while(n - coin[p] < 0)p++;
      n -= coin[p];
      ans++;
    }
    std::cout << ans << std::endl;
  }
  return 0;
}