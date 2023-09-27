#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int debt = 100000;

  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    debt = debt / 100 * 105;
    if (debt % 1000 != 0){
      debt = (debt / 1000 + 1) * 1000;
    }
  }
  printf("%d\n", debt);

  return (0);
}