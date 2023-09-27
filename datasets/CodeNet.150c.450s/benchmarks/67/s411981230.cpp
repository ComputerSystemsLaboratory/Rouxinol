#include <iostream>
using namespace std;

int main(){
  while(true){
    int n;
    cin >> n;
    if(n == 0)
      break;

    int ans = 0;
    for(int i=1; i<=n/2; i++){
      int temp = 0;
      for(int j=i; temp < n; j++){
        temp += j;
      }
      if(temp == n)
        ans += 1;
    }

    cout << ans << endl;
  }
  
  return 0;
}