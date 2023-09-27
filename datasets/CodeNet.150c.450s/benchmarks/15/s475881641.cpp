#include <stdio.h>
#include <iostream>
using namespace std;

int search(int A[], int n, int key)
{
  int i = 0;
  A[n] = key;
  while (A[i] != key)
    i++;
  return i != n;
}

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
    cnt += search(S, n, T[i]);
  }

  printf("%d\n", cnt);
  return 0;
}

