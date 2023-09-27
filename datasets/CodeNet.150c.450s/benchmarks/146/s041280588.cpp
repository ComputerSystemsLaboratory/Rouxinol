#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  int n;
  float x[2], y[2], a[2];

  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      for (int k = 0; k < 2; k++){
        scanf("%f%f", &x[k], &y[k]);
      }
      a[j] = (y[1] - y[0]) / (x[1] - x[0]);
    }
    if (a[0] == a[1]){
      puts("YES");
    }
    else {
      puts("NO");
    }
  }

  return (0);
}