#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c, n;

  cin >> n;
  while(n-- > 0) {
    cin >> a >> b >> c;

    int array[3] = { a, b, c };
    sort(array, array+3);

    if(array[0]*array[0] + array[1]*array[1] == array[2]*array[2]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  return 0;
}