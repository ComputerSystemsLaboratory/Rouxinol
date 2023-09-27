#include <iostream>
using namespace std;
   
int main() {
  int n;
  cin >> n;
  int ary[n], x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    ary[i] = x;
  }
  for (int j = n - 1; j > -1; j--) {
    if (j != 0) {
      cout << ary[j] << " ";
    } else {
      cout << ary[j] << endl;
    }
  }
  return 0;
}