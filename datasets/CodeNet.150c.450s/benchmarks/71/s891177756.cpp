#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int n){
    int ans = 0;
    int i, j, k, l;
    if(n > 36) return 0;
    for(i=0; i<=min(n, 9); i++){
      for(j=0; j<=min(n-i, 9); j++){
        for(k=0; k<=min(n-i-j, 9); k++){
          if(0 <= n-i-j-k && n-i-j-k <= 9) {
          	ans++;
          	//cout << n-i-j-k << endl;
          }
        }
      }
    }
    return ans;
}




int main() {
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n){
      cout << solve(n) << endl;
    }
    return 0;
}