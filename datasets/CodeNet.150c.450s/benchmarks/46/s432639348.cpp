#include <iostream>

using namespace std;

int main() {
  int n,x;
  int ans;
  while(true){
    ans = 0;
    cin >> n >> x;
    if(n == 0 && x == 0) break;
    for(int i = 1; i <= n-2; ++i){
      for(int j = i+1; j <= n-1; ++j){
        if(i == j) continue;
        for(int k = j+1; k <= n; ++k){
          if(i == k || j == k) continue;
          if(i+j+k == x){
            ++ans;
          }
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
