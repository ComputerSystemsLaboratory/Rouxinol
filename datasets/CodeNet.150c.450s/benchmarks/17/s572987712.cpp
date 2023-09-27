#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 5;
  int a[n];
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  sort(a,a+n);
  for(int i=n-1;i>=0;i--) {
    cout << a[i] << (i == 0 ? "\n" : " ");
  }
}