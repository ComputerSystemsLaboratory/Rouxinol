#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  int sqn = sqrt(n);
  vector<int> v(n + 1, 0);
  for(int i = 1;i <= sqn;i++) {
    for(int j = 1;j <= sqn;j++) {
      for(int k = 1;k <= sqn;k++) {
        m = i*i+j*j+k*k+i*j+j*k+k*i;
        if(m <= n) v[m]++;
      }
    }
  }
  for(int i = 1;i < n+1;i++) cout << v[i] << endl;
}