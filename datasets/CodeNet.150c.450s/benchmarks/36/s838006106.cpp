#include <iostream>

using namespace std;

int main() {
  int d;
  while(cin >> d) {
    int ans = 0;
    
    for(int i = 600 - d; i > 0; i -= d)
      ans += i * i * d;
    cout << ans << endl;
  }
  
  return 0;
}