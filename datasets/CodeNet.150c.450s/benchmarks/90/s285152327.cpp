#include <iostream>
#include <cstdio>

using namespace std;

int hindo[100];

int main()
{
  int n;
  while (scanf("%d ", &n) == 1) {
    hindo[n - 1]++;
  }
  
  int mx = 0;
  for (int i = 0; i < 100; i++) {
    mx = max(hindo[i], mx);
  }
  for (int i = 0; i < 100; i++) {
    if (mx == hindo[i]) {
      printf("%d\n", i + 1);
    }
  }
  return 0;
}