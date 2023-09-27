#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  int S[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &S[i]);
  }
  int q;
  scanf("%d", &q);
  int T[q];
  for (int i = 0; i < q; i++)
  {
    scanf("%d", &T[i]);
  }
  int cnt = 0;
  for (int i = 0; i < q; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (S[j] == T[i])
      {
        cnt++;
        break;
      }
    }
  }

  printf("%d\n", cnt);
  return 0;
}
