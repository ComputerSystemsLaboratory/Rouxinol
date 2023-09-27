#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &A[i]);
  }
  for (int p = 0; p < n; ++p) {
    if (p) { fprintf(stdout, " "); }
    fprintf(stdout, "%d", A[p]);
  }
  fprintf(stdout, "\n");
  for (int i = 1; i < n; ++i) {
    int j = i - 1;
    int key = A[i];
    while (j >= 0 && key < A[j]) {
      A[j + 1] = A[j];
      --j;
    }
    A[j + 1] = key;
    for (int p = 0; p < n; ++p) {
      if (p) { fprintf(stdout, " "); }
      fprintf(stdout, "%d", A[p]);
    }
    fprintf(stdout, "\n");
  }
  return 0;
}