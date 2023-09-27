#include <iostream>
using namespace std;

int A[30];
int main() {
  A[0] = 1;
  A[1] = 1;
  A[2] = 2;

  for(int i = 3; i <= 30; i++) {
    A[i] = A[i-1] + A[i-2]+ A[i-3];
  }
  int N;
  while(cin >> N && N)
    cout << A[N]/3650 + 1 << endl;
}