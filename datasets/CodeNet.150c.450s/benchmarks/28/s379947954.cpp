#include <iostream>
using namespace std;
typedef long long llong;

llong *A;
int n, k;

int check(llong p) {
  int i = 0;
  for (int j = 0; j < k; j++) {
    llong s = 0;
    while (s + A[i] <= p) {
      s += A[i];
      i++;
      if (i == n) return n;
    }
  }
  return i;
}

llong solve(void) {
  llong left = 0;
  llong right = 100000 * 10000;
  llong mid;
  while (right - left > 1) {
    mid = (left + right) / 2;
    int v = check(mid);
    if (v >= n) right = mid;
    else left = mid;
  }
  
  return right;
}

int main(void){
  cin >> n >> k;
  A = new llong[n];
  
  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    A[i] = v;
  }
  
  llong ans = solve();
  
  cout << ans << endl;
  
  delete[] A; 
  return 0;
}