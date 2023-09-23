#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int k = 100000;
  for (int i = 0; i< n; i++) {
    k *= 1.05;
    if (k % 1000 != 0) {
      k /= 1000;
      k += 1;
      k *= 1000;
    }
  }
  cout << k << endl;
}

