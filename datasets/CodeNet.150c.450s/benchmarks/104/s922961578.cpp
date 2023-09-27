#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
  int w, n, a, b;
  int num[30];
  scanf("%d %d", &w, &n);
  for(int i = 0; i < w; i++){
    num[i] = i + 1;
  }
  for(int i = 0; i < n; i++){
    scanf("%d,%d", &a, &b);
    swap(num[a - 1], num[b - 1]);
  }
  for(int i = 0; i < w; i++){
    printf("%d\n", num[i]);
  }
}