#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;


void countingSort(vector<int>& A, vector<int>& B, int k)
{
  int n = A.size();
  vector<int> freqs(k + 1, 0);
  for (int i = 0; i < n; ++i) { ++freqs[A[i]]; }
  for (int i = 1; i <= k; ++i) { freqs[i] += freqs[i - 1]; }
  for (int i = 0; i < n; ++i) {
    B[freqs[A[i]] - 1] = A[i];
    --freqs[A[i]];
  }
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> A(n), B(n);
  int k = 0;
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &A[i]);
    k = max(k, A[i]);
  }
  countingSort(A, B, k);
  for (int i = 0; i < n; ++i) {
    if (i) { fprintf(stdout, " "); }
    fprintf(stdout, "%d", B[i]);
  }
  fprintf(stdout, "\n");
  return 0;
}