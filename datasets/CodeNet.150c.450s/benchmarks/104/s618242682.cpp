#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {

  int w, n, a[31], b[31];
  cin >> w;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    scanf("%d,%d", &a[i], &b[i]);
  }

  int line[w+1], tmp = 0;
  for(int j = 1; j <= w; j++) {
    line[j] = j;
  }
  for(int k = 1; k <= n; k++) {
    tmp = line[a[k]];
    line[a[k]] = line[b[k]];
    line[b[k]] = tmp;
    tmp = 0;
  }

  for(int l = 1; l <= w; l++) {
    cout << line[l] << '\n';
  }

  return 0;
}