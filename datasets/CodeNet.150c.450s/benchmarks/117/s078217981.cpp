#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int cnt = 0;

void merge(vector<int>& A, int left, int mid, int right)
{
  int n1 = mid - left, n2 = right - mid;
  vector<int> L(n1 + 1, INF), R(n2 + 1, INF);
  for (int i = 0; i < n1; ++i) { L[i] = A[left + i]; }
  for (int i = 0; i < n2; ++i) { R[i] = A[mid + i]; }
  int i = 0, j = 0;
  for (int k = left; k < right; ++k) {
    ++cnt;
    if (L[i] <= R[j]) { A[k] = L[i]; ++i; }
    else { A[k] = R[j]; ++j; }
  }
}

void mergeSort(vector<int>& A, int left, int right)
{
  if (right - left > 1) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> S(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &S[i]);
  }
  mergeSort(S, 0, n);
  for (int i = 0; i < n; ++i) {
    if (i) { fprintf(stdout, " "); }
    fprintf(stdout, "%d", S[i]);
  }
  fprintf(stdout, "\n");
  fprintf(stdout, "%d\n", cnt);
  return 0;
}