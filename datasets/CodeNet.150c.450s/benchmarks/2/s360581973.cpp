#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int partition(vector<int>& A, int p, int r)
{
  int x = A[r];
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if (A[j] <= x) {
      ++i;
      swap(A[i], A[j]);
    }
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &A[i]);
  }
  int ix = partition(A, 0, n - 1);
  for (int i = 0; i < n; ++i) {
    if (i) { fprintf(stdout, " "); }
    if (i == ix) {
      fprintf(stdout, "[%d]", A[i]);
    }
    else {
      fprintf(stdout, "%d", A[i]);
    }
  }
  fprintf(stdout, "\n");
  return 0;
}