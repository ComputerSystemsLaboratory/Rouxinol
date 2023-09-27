#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int y , m , d,n;
void solve(){
  bool birthDay = false;
  int ans = 0;
  int maxDay;
  for(int year = 1; year < 1000 ; year++){
    for(int month = 1 ; month <= 10 ; month++){
      if(year % 3 == 0) maxDay = 20;
      else if(month % 2 == 0) maxDay = 19;
      else maxDay = 20;
      for(int day = 1; day <= maxDay; day++){
        if(year == y && month == m && day == d){
          birthDay = true;
        }
        if(birthDay) ans++;
      }
    }
  }
  cout << ans << endl;
}

int main(){
  cin >> n;
  for(int input = 0; input < n; input++){
    cin >> y >> m >> d;
    solve();
  }

  return 0;
}

