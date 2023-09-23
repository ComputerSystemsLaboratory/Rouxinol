#include <iostream>
#define REP(i, a, n) for(int i = a; i < n; i++)
using namespace std;


int n;
int a, b;
int A, B;

int main(void) {
  while(1) {
    cin >> n;
    if(n == 0) break;

    A = 0;
    B = 0;

    REP(i, 0, n) {
      cin >> a >> b;
      if(a > b) A += a + b;
      if(a < b) B += a + b;
      if(a == b) A += a, B += b;
    }

    cout << A << " " << B << endl;
  }

  return 0;
}