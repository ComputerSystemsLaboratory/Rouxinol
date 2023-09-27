#include <bits/stdc++.h>
using namespace std;

int calc(int a, int b, int x){
  return a*(100+x)/100 + b*(100+x)/100;
}

int main(){
  int x, y, s;
  while(cin >> x >> y >> s){
    if(x+y+s == 0) break;
    int ans = 0;
    for(int i = 1 ; i <= s ; i++){
      for(int j = 1 ; j+i <= s ; j++){
	if(calc(i, j, x) == s) ans = max(ans, calc(i, j, y));
      }
    }
    cout << ans << endl;
  }
  return 0;
}