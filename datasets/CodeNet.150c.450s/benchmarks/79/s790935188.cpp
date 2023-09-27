#include <iostream>
using namespace std;

int n, r, p, c, d[50], e[50];

int main() {
  while(cin >> n >> r && n && r) {
    for(int i = 0; i < n; i++)
      d[i] = n - i;
    for(int i = 0; i < r; i++) {
      cin >> p >> c;
      for(int j = 0; j < p - 1; j++)
        e[j] = d[j];
      for(int j = 0; j < c; j++)
        d[j] = d[j + p - 1];
      for(int j = 0; j < p - 1; j++)
        d[j + c] = e[j];
    }
    cout << d[0] << endl;
  }
}