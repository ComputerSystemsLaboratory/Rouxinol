#include <bits/stdc++.h>

using namespace std;

#define ll long long
typedef complex<double> P;

int A[2000000];
int B[2000000];
int C[10001] = {0};
int k = 0;
int n;

void counting_sort() {
  // ????????°????¨????
  for (int i = 0; i < n; i++) {
    C[A[i]]++;
  }
  for (int i = 1; i <= k; i++) {
    C[i] += C[i-1];
  }

  for (int i = n-1; i >= 0; i--) {
    B[C[A[i]]-1] = A[i];
    C[A[i]]--;
  }
}

void show() {
  for (int i = 0; i < n; i++) {
    cout << B[i] << (i == n-1 ? '\n' : ' ');
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
    k = max(k, A[i]);
  }

  counting_sort();

  show();
}