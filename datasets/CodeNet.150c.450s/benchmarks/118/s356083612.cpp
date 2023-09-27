#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  for(int i=0; i<n; i++){
    int y, m, d;
    cin >> y >> m >> d;

    int ans = 0;
    ans -= d-1;
    if(y%3 == 0){
      ans -= 20 * (m-1);
    }else{
      if(m%2 == 0){
        ans -= 20 * (int)((m-1)/2+1);
        ans -= 19 * (int)((m-1)/2);
      }else{
        ans -= 20 * (m-1)/2;
        ans -= 19 * (m-1)/2;
      }
    }
    ans += 10 * 20 * (999/3 - (y-1)/3);
    ans += 5 * 39 * (999 - (y-1) - (999/3 - (y-1)/3));

    cout << ans << endl;
  }
  
  return 0;
}