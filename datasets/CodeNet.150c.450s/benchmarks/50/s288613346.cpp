#include <bits/stdc++.h>
using namespace std;

int main(void){
  int coins[] = {500, 100, 50, 10, 5, 1};

  while(1){
  int ans = 0, n; cin >> n;
  if(n == 0) return 0;
  n = 1000 - n;
  for(int i=0; i < 6; i++){
    while(n >= coins[i]){
      ans++;
      n -= coins[i];
    }
  }
  cout << ans << endl;
  }
}