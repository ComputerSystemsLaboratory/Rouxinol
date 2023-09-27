#include <cstdio>
using namespace std;

int MAX = 10000;

void countingSort(int a[], int b[], int c[], int n)
{
  for (int i = 0; i <= MAX; i++)
    c[i] = 0;

  for (int i = 1; i <= n; i++)
    c[a[i]]++;

  for (int i = 1; i <= MAX; i++)
    c[i] += c[i - 1];

  for (int i = n; i > 0; i--)
  {
    b[c[a[i]]] = a[i];
    c[a[i]]--;
  }
}

int main()
{
  int n;
  scanf("%d", &n);

  int a[n + 1], b[n + 1], c[MAX + 1];
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);

  countingSort(a, b, c, n);

  for (int i = 1; i < n; i++)
    printf("%d ", b[i]);
  printf("%d\n", b[n]);
  return 0;
}