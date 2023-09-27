#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int A=pow(10,5);
  for (int i=0; i<n; i++) {
    A*=(1.05);
    A = (A + 999) / 1000 * 1000;
  }
  
  printf("%d\n",A);
  return 0;
}