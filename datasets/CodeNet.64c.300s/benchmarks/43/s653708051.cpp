#include <iostream>
using namespace std;

int main () {
  int A[3], B[3], a = 0, b = 0;
  for (int i=0; i<4; i++) {
    cin >> A[i];
    a += A[i];
  }
  for (int i=0; i<4; i++) {
    cin >> B[i];
    b += B[i];
  }
  if(a>b) cout << a << endl;
  else cout << b << endl;
  return 0;
}
