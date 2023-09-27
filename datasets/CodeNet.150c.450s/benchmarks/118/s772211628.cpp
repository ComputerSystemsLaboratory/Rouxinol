#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  int miremiam = 196471;
  int big = 200;
  int small = 195;
  int ans = 0;
  
  cin >> n;

  int year, month, day;

  for(int i = 0; i < n; i++){
    cin >> year >> month >> day;
    for(int j = 1; j < year; j++){
      if(j % 3 == 0) ans += big;
      else ans += small;
      //  cout << ans << endl;
      }
    for(int s = 1; s < month; s++){
      if(year % 3 == 0) ans += 20;
      else if(s % 2 == 0) ans += 19;
      else ans += 20;
    }
    ans += day;
    // cout << ans << endl;
    cout << miremiam - ans << endl;
    ans = 0;

  }
  


  return 0;
}