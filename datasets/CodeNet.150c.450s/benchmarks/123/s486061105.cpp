#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int ans = 0;
  for(int i=0; i < n; i++){
    int a; cin >> a;
    bool flg = true;
    for(int j=2; j*j <= a; j++){
      if(a % j == 0){
        flg = false;
      }
    }
    if(flg) ans++;
  }

  cout << ans << endl;

}