#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int Nmax = 2e5 + 10;
int A[Nmax];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
    if (i >= k) {
      cout << ((A[i] > A[i - k]) ? "Yes" : "No") << "\n";
    }
  }
  
  
  return 0;
}
