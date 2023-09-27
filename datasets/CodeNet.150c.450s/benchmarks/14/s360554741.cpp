#include <iostream>
using namespace std;
 
void call(int n);
     
int main() {
  int n;
  cin >> n;
  call(n);
  return 0;
}
  
void call(int n) {
  int tmp;
  for (int i = 1; i <= n; i++) {
    tmp = i;
    if (i % 3 == 0) {
      cout << " " << i;
    } else {
      while (tmp > 0) {
        if (tmp % 10 == 3) {
          cout << " " << i;
          break;
        }
        tmp /= 10;
      }
    }
  }
  cout << endl;  
}