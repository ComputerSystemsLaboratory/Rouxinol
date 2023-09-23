#include <iostream>
#define REP(i, a, n) for(int i = 0; i < n; i++)
using namespace std;


int x, y;

int main(void) {
  REP(i, 0, 3000) {
    cin >> x >> y;
    if(x == 0 && y == 0) break;
    if(x > y) swap(x, y);
    cout << x << " " << y << endl;
  }

  return 0;
}