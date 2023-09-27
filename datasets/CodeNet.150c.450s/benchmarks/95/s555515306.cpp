#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    bool isDowned, isLDown, isRDown;
    isDowned = isLDown = isRDown = true;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
      string operation;
      cin >> operation;
      if(operation == "lu") isLDown = false;
      if(operation == "ld") isLDown = true;
      if(operation == "ru") isRDown = false;
      if(operation == "rd") isRDown = true;
      if((isDowned && !isLDown && !isRDown) || (!isDowned && isLDown && isRDown)) {
        ++ans;
        isDowned = !isDowned;
      }
    }
    cout << ans << endl;
  }
  return 0;
}