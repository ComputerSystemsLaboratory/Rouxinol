#include <cstdio>
using namespace std;

int count = 0;

void merge(int a[], int left, int mid, int right)
{
  int n1 = mid - left;
  int n2 = right - mid;
  int l[n1 + 1], r[n2 + 1];
  for (int i = 0; i < n1; i++)
    l[i] = a[left + i];
  for (int i = 0; i < n2; i++)
    r[i] = a[mid + i];
  l[n1] = 1000000001;
  r[n2] = 1000000001;

  int i = 0, j = 0;
  for (int k = left; k < right; k++)
  {
    count++;
    if (l[i] <= r[j])
    {
      a[k] = l[i];
      i++;
    }
    else
    {
      a[k] = r[j];
      j++;
    }
  }
}

void mergeSort(int a[], int left, int right)
{
  if (left + 1 < right)
  {
    int mid = (left + right) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  mergeSort(a, 0, n);

  for (int i = 0; i < n - 1; i++)
    printf("%d ", a[i]);
  printf("%d\n", a[n - 1]);
  printf("%d\n", count);
  return 0;
}