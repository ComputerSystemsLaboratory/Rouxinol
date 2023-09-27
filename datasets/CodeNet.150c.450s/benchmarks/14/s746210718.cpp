#include <iostream>

using namespace std;

int main(void) {
  int i = 0;
  int n;
  cin >> n;
  while(++i <= n) {
    int x = i;
    if(x % 3 == 0) {
      cout << " " << i;
      if(i <= n) continue;
    }
    while(x) {
      if(x % 10 == 3) {
        cout << " " << i;
        if(i <= n) break;
      }
      x /= 10;
    }
  }
  cout << endl;
  return 0;
}