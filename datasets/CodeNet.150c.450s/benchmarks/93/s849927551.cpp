// #include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

struct Card
{
  char pic;
  int num;
};

int partition(Card a[], int p, int r)
{
  int x = a[r].num;
  int i = p - 1;
  for (int j = p; j < r; j++)
    if (a[j].num <= x)
    {
      i++;
      swap(a[i], a[j]);
    }
  swap(a[i + 1], a[r]);
  return i + 1;
}

void quickSort(Card a[], int p, int r)
{
  if (p < r)
  {
    int q = partition(a, p, r);
    quickSort(a, p, q - 1);
    quickSort(a, q + 1, r);
  }
}

void merge(Card a[], int left, int mid, int right)
{
  int n1 = mid - left;
  int n2 = right - mid;
  Card l[n1 + 1], r[n2 + 1];
  for (int i = 0; i < n1; i++)
    l[i] = a[left + i];
  for (int i = 0; i < n2; i++)
    r[i] = a[mid + i];
  l[n1] = {'J', 1000000001};
  r[n2] = {'J', 1000000001};

  int i = 0, j = 0;
  for (int k = left; k < right; k++)
    if (l[i].num <= r[j].num)
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

void mergeSort(Card a[], int left, int right)
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
  int n, x;
  char p;
  // scanf("%d", &n);
  cin >> n;

  Card a[n], ms[n];
  for (int i = 0; i < n; i++)
  {
    // scanf("%s%d", &p, &x);
    cin >> p >> x;
    a[i] = {p, x};
    ms[i] = {p, x};
  }

  quickSort(a, 0, n - 1);
  mergeSort(ms, 0, n);

  bool isStable = true;
  for (int i = 0; i < n; i++)
    if (a[i].num != ms[i].num || a[i].pic != ms[i].pic)
    {
      printf("Not stable\n");
      isStable = false;
      break;
    }

  if (isStable)
    printf("Stable\n");

  for (int i = 0; i < n; i++)
    printf("%c %d\n", a[i].pic, a[i].num);

  return 0;
}