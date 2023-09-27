#include <iostream>
#include <vector>

#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }

  for(int i=n-1; i>=0; i--) {
    printf("%d", a[i]);
    if(i!=0) printf(" ");
  }

  printf("\n");
  return 0;

}