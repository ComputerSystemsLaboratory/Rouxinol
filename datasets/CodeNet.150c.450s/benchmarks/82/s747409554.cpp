#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

typedef struct dice {
  int a[6];
  void change(char ch) {
    if(ch == 'E') {
      int temp = a[0];
      a[0] = a[3];
      a[3] = a[5];
      a[5] = a[2];
      a[2] = temp;
    }
    if(ch == 'N') {
      int temp = a[0];
      a[0] = a[1];
      a[1] = a[5];
      a[5] = a[4];
      a[4] = temp;
    }
    if(ch == 'S') {
      int temp = a[0];
      a[0] = a[4];
      a[4] = a[5];
      a[5] = a[1];
      a[1] = temp;
    }
    if(ch == 'W') {
      int temp = a[0];
      a[0] = a[2];
      a[2] = a[5];
      a[5] = a[3];
      a[3] = temp;
    }
  }
  int query(int x) { return a[x]; }
} dice;

int main(void) {
  dice a;
  for(int i = 0; i < 6; i++) {
    cin >> a.a[i];
  }
  int q;
  cin >> q;
  for(int i = 0; i < q; i++) {
    int front, top;
    cin >> top >> front;
    char d[8] = {'N', 'N', 'N', 'N', 'E', 'N', 'N', 'N'};
    for(int j = 0; j < 8; j++) {
      if(a.query(1) == front) {
        break;
      }
      a.change(d[j]);
    }
    while(a.query(0) != top)
      a.change('E');
    cout << a.query(2) << endl;
  }

  return 0;
}

