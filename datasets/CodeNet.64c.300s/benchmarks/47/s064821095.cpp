#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int num[101] = {0};
  int n;

  while (~scanf("%d", &n)){
    num[n]++;
  }
  
  int n_max = 0;
  for (int i = 1; i <= 100; i++){
    n_max = max(n_max, num[i]);
  }

  for (int i = 1; i <= 100; i++){
    if (num[i] == n_max){
      printf("%d\n", i);
    }
  }

  return (0);
}