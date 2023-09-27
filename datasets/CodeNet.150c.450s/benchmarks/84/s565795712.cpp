#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

ll ans = 0;

void merge(vector<int>& v, int left, int mid, int right)
{
  int n1 = mid - left, n2 = right - mid;
  vector<int> L(v.begin() + left, v.begin() + left + n1);
  vector<int> R(v.begin() + mid, v.begin() + mid + n2);
  L.push_back(INF);
  R.push_back(INF);
  for (int i = 0, j = 0, k = left; k < right; ++k) {
    if (L[i] <= R[j]) {
      v[k] = L[i];
      ++i;
    }
    else {
      v[k] = R[j];
      ++j;
      ans += n1 - i;
    }
  }
}

void mergeSort(vector<int>& v, int left, int right)
{
  if (left + 1 >= right) { return; }
  int mid = (left + right) / 2;
  mergeSort(v, left, mid);
  mergeSort(v, mid, right);
  merge(v, left, mid, right);
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &A[i]);
  }
  mergeSort(A, 0, n);
  fprintf(stdout, "%lld\n", ans);
  return 0;
}