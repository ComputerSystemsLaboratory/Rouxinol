#include<iostream>
using namespace std;
#include<math.h>

int main() {
  int n, temp;
  cin >> n;
  int res[n];
  for(int i = 0; i < n; i++) {
    res[i] = 0;
  }
  int m = sqrt(n);
  for(int i = 1; i <= m; i++) {
    for(int j = 1; j <= m; j++) {
      for(int k = 1; k <= m; k++) {
        temp = i*i + j*j + k*k + i*j + i*k + j*k - 1;
        if(temp < n) res[temp]++;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    cout << res[i] << endl;
  }
  return 0;
}