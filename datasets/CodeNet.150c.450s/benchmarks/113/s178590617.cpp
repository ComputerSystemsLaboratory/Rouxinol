#include <iostream>
#define REP(i, a, n) for(int i = a; i < n; i++)
using namespace std;


int main(void) {
  REP(i, 1, 10001) {
    int x;
    cin >> x;
    if(x == 0) break;

    cout << "Case " << i << ": " << x << endl;
  }

  return 0;
}