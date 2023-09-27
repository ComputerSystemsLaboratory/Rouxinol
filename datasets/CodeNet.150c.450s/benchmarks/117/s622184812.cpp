#include <cstdio>
#include <iostream>
#include <climits>

using namespace std;

int cnt = 0;
int Arr[500010];
int L[500010];
int R[500010];

void merge(int A[], int l, int m, int r)
{
  int n1 = m - l;
  int n2 = r - m;
  for(int i = 0; i < n1; i++) L[i] = A[l + i];
  for(int i = 0; i < n2; i++) R[i] = A[m + i];
  L[n1] = INT_MAX;
  R[n2] = INT_MAX;

  int a = 0;
  int b = 0;
  for(int i = l; i < r; i++)
  {
    cnt++;
    if(L[a] <= R[b])
    {
      A[i] = L[a];
      a++;
    }
    else
    {
      A[i] = R[b];
      b++;
    }
  }
}

void mergeSort(int A[], int l, int r)
{
  if(l + 1 < r){
    int m = (l + r) / 2;
    mergeSort(A, l, m);
    mergeSort(A, m, r);
    merge(A, l, m ,r);
  }
}

void printArr(int A[], int n)
{
  for(int i = 0; i < n-1 ; i++) cout << A[i] << " ";
  cout << A[n-1] << endl;
}

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> Arr[i];
  mergeSort(Arr, 0, n);
  printArr(Arr, n);
  cout << cnt << endl;
  return 0;
}