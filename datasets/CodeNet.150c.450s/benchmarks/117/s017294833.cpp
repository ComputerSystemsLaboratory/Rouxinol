#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void trace(const vector<int>& a) {
  for (auto it = a.begin(); it < a.end(); ++it) {
    cout << *it << ((it + 1 != a.end())? " " : "\n");
  }
}

int times = 0;
void merge(vector<int>& A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> L(n1 + 1);
  vector<int> R(n2 + 1);
  for (int i = 0; i < n1; ++i) L[i] = A[left + i];
  for (int i = 0; i < n2; ++i) R[i] = A[mid + i];
  L[n1] = R[n2] = INT_MAX;
  int i = 0, j = 0;
  for (int k = left; k < right; ++k) {
    ++times;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      ++i;
    } else {
      A[k] = R[j];
      ++j;
    }
  }
}

void mergeSort(vector<int>& A, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> S(n);
  for (int i = 0; i < n; ++i) cin >> S[i];
  mergeSort(S, 0, n);
  trace(S);
  cout << times << endl;
}

