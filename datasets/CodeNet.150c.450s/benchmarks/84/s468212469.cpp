#include <iostream>
#include <cstdio>

typedef long long ll;
ll merge(int A[], int left, int mid, int right);
ll mergeSort(int A[], int left, int right);
# define MM 2000000000
int main()
{
  using namespace std;
  int n;
  cin >> n;
  int *A = new int[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  cout << mergeSort(A, 0, n - 1) << endl;
  delete[] A;
  return 0;
}

ll merge(int A[], int left, int mid, int right)
{
  ll count = 0;
  int len1 = mid - left + 1;
  int len2 = right - mid;
  int *L = new int[len1 + 1];
  int *R = new int[len2 + 1];
  for (int i = 0; i < len1; i++)
  {
    L[i] = A[i + left];
  }
  for (int i = 0; i < len2; i++)
  {
    R[i] = A[i + mid + 1];
  }

  int i = 0, j = 0, k = left;
  while (i < len1 && j < len2)
  {
    if (L[i] <= R[j])
    {
      A[k++] = L[i++];
    }
    else
    {
      A[k++] = R[j++];
      count += len1 - i;
    }
  }
  while (i < len1)
  {
    A[k++] = L[i++];
  }
  while (j < len2)
  {
    A[k++] = R[j++];
  }
  delete[] L;
  delete[] R;
  return count;
}

ll mergeSort(int A[], int left, int right)
{
  ll r1, r2, r3;
  if (left < right)
  {
    int mid = (left + right) / 2;
    r1 = mergeSort(A, left, mid);
    r2 = mergeSort(A, mid + 1, right);
    r3 = merge(A, left, mid, right);
    return r1 + r2 + r3;
  }
  else
  {
    return 0;
  }
}

