#include <iostream>
#include <map>
using namespace std;

int main() {
  int n, a[4][13] = {0};                                                                                                                                      
  map<char, int> m;
  char c[4];
  m['S'] = 0; m['H'] = 1; m['C'] = 2; m['D'] = 3;
  c[0] = 'S'; c[1] = 'H'; c[2] = 'C'; c[3] = 'D';                                                                                                             
  cin >> n;
  for (int i = 0; i < n; i++) {
    char suit; int rank;
    cin >> suit >> rank;
    a[m[suit]][rank-1] = 1;                                                                                                                                   
  }
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 13; j++)
      if (a[i][j] == 0) {
        cout << c[i] << ' ' << j + 1;
        cout << endl;
      }
  return 0;
}