#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
  int a[6];
  for(int i = 0; i < 6; i++)
    cin >> a[i];
  string s;
  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'E') {
      int temp = a[0];
      a[0] = a[3];
      a[3] = a[5];
      a[5] = a[2];
      a[2] = temp;
    }
    if(s[i] == 'N') {
      int temp = a[0];
      a[0] = a[1];
      a[1] = a[5];
      a[5] = a[4];
      a[4] = temp;
    }
    if(s[i] == 'S') {
      int temp = a[0];
      a[0] = a[4];
      a[4] = a[5];
      a[5] = a[1];
      a[1] = temp;
    }
    if(s[i] == 'W') {
      int temp = a[0];
      a[0] = a[2];
      a[2] = a[5];
      a[5] = a[3];
      a[3] = temp;
    }
  }
  cout << a[0] << endl;

  return 0;
}

