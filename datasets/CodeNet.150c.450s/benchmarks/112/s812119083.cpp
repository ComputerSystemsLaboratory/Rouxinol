#include <iostream>
#define REP(i, a, n) for(int i = a; i < n; i++)
using namespace std;


int n, m;

char table[256];
char c, d;

int main(void) {
  while(1) {
    cin >> n;
    if(n == 0) break;
    REP(i, 0, 256) table[i] = (char) i;
    REP(i, 0, n) {
      cin >> c >> d;
      table[c] = d;
    }
    cin >> m;
    REP(i, 0, m) {
      cin >> c;
      cout << table[c];
    }
    cout << endl;
  }

  return 0;
}