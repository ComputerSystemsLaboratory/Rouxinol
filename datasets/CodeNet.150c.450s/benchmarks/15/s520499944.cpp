#include<iostream>
using namespace std;

int search(int A[], int n, int key) {
  A[n] = key;
  int i = 0;
  while(A[i]!=key) {
    i++;
  }
  return i!=n;
}

int main() {
  int n, q, m, sum = 0;
  cin >> n;
  int S[n+1];
  for (int i=0; i<n; i++) {
    cin >> S[i];
  }
  cin >> q;
  for (int i=0; i<q; i++) {
    cin >> m;
    if (search(S, n, m)) {
        sum++;
    }
  }
  cout << sum << endl;
  return 0;
}

