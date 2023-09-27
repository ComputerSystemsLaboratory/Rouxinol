#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void)
{
  int w, n, i;
  int x[30];
  int a, b;

  cin >> w >> n;
  for(i = 1; i <= w; i++){
    x[i - 1] = i;
  }
  for(i = 0; i < n; i++){
    scanf("%d,%d", &a, &b);
    swap(x[a - 1], x[b - 1]);
  }
  for(i = 0; i < w; i++){
    cout << x[i] << endl;
  }

  return 0;

}