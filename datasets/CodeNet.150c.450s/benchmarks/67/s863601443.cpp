#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int result = 0;
    for(int k = 2, d = 1; n >= k + d; d += k, ++k) {
      if(!((n - d) % k)) ++result;
    }
    cout << result << endl;
  }
  return 0;
}