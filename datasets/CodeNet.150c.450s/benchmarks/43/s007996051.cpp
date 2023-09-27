#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  int h = -1;
  int A[100];
  int B[100];
  while(1) {
    ++h;
    cin >> k;
    if(k == 0) break;
    int a,b;
    A[h] = 0;
    B[h] = 0;
    for(int c = 0; c < k; ++c) {
      cin >> a >> b;
      if(a > b) {
        A[h] += a + b;
      }else if(a == b) {
        A[h] += a;
        B[h] += b;
      }else if(a < b) {
        B[h] += a + b;
      }
    }
  }
  for(int ho = 0; ho < h; ++ho) {
    cout << A[ho] << " " << B[ho] << endl;
  }
}