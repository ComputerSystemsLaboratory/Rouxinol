#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main () {
  int n, H[252];

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> H[i];
  }

  for (int i = 1; i <= n; i++) {
    cout << "node " << i << ": ";
    cout << "key = " << H[i] << ", ";
    
    if (i != 1)
      cout << "parent key = " << H[(int)floor(i / 2)] << ", ";
    
    if ((i * 2) <= n)
      cout << "left key = " << H[i * 2] << ", ";
    if ((i * 2 + 1) <= n)
      cout << "right key = " << H[i * 2 + 1] << ", ";

    cout << endl;
  }

  return 0;
}

