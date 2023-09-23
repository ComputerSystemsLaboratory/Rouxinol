#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    int y,m,d;
    cin >> y >> m >> d;
    int ans = 0;
    if(y % 3 == 0 || m % 2 == 1) ans += 20-d;
    else ans += 19 - d;
    for(int j=m+1; j<=10; j++){
      if(y % 3 == 0 || j % 2 == 1) ans += 20;
      else ans += 19;
    }
    for(int j=y+1; j<=999; j++){
      if(j % 3 == 0) ans += 200;
      else ans += 195;
    }
    cout << ans+1 << endl;
  }
  return 0;
}