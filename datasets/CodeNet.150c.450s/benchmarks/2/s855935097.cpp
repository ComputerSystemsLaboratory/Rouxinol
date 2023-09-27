#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int partition(vector<int>& A, int p, int r) {
  int x = A[r];
  int i = p - 1;
  for(int j = p; j <= r - 1; ++j) {
	if(A[j] <= x) {
	  i += 1;
	  swap(A[i], A[j]);
	}
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

int main() {
  int n;
  scanf("%d", &n);
  vector<int> A(n);
  for(int i = 0; i < n; ++i) {
	scanf("%d", &A[i]);
  }

  int q = partition(A, 0, n - 1);
  for(int i = 0; i < n; ++i) {
	if(i == q) printf("[%d]", A[i]);
	else printf("%d", A[i]);

	cout << (i < n - 1 ? " " : "\n");
  }
  return 0;
}