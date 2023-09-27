#include <cstdio>
using namespace std;

using int64 = long long;

int64 merge(int a[], int left, int mid, int right)
{
  int64 count = 0;
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
    if (l[i] <= r[j])
    {
      a[k] = l[i];
      i++;
    }
    else
    {
      a[k] = r[j];
      count += n1 - i;
      j++;
    }
  }

  return count;
}

int64 mergeSort(int a[], int left, int right)
{
  if (left + 1 < right)
  {
    int mid = (left + right) / 2;
    int64 v1 = mergeSort(a, left, mid);
    int64 v2 = mergeSort(a, mid, right);
    int64 v3 = merge(a, left, mid, right);
    return v1 + v2 + v3;
  }
  return 0;
}

int main()
{
  int n;
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("%lld\n", mergeSort(a, 0, n));
  return 0;
}