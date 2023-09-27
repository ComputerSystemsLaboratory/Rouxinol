#include <iostream>
using namespace std;

int main(){
  int x, n;

  n = 1;
  while (1) {
    cin >> x;
    if (x == 0) {
      break;
    }
    cout << "Case " << n << ": " << x << endl;
    n++;
  }

  return 0;
}
