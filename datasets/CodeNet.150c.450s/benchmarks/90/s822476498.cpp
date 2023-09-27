#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int a[101];
  int n, max;
  memset(a, 0, sizeof(int)*101);
  while (cin >> n) a[n]++; 
  for (int i=0; i<=100; i++) {
    if (a[i] > max) max = a[i];
  }
  for (int i=0; i<=100; i++) {
    if (a[i] == max) cout << i << endl;
  }
  return 0;
}