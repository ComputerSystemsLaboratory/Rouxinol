#include <iostream>
using namespace std;

int count = 0;

void merge(int A[], int left, int mid, int right)
{
  int n1 = mid - left;
  int n2 = right - mid;

  int L[n1 + 1];
  for (int i = 0; i < n1; ++i)
  {
    L[i] = A[left + i];
  }
  L[n1] = 1000000000 + 1;

  int R[n2 + 1];
  for (int i = 0; i < n2; ++i)
  {
    R[i] = A[mid + i];
  }
  R[n2] = 1000000000 + 1;

  int i = 0;
  int j = 0;
  for (int k = left; k < right; ++k)
  {
    ++count;
    if (L[i] <= R[j])
    {
      A[k] = L[i];
      ++i;
    }
    else
    {
      A[k] = R[j];
      ++j;
    }
  }
}

void merge_sort(int A[], int left, int right)
{
  if (left + 1 < right)
  {
    int mid = (left + right) / 2;
    merge_sort(A, left, mid);
    merge_sort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main()
{
  int n;
  cin >> n;

  int S[500000];
  for (int i = 0; i < n; ++i)
  {
    cin >> S[i];
  }

  merge_sort(S, 0, n);

  for (int i = 0; i < n; ++i)
  {
    if (i != 0) cout << ' ';
    cout << S[i];
  }
  cout << endl;
  cout << count << endl;

  return 0;
}

