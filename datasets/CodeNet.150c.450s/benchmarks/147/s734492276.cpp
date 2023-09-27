#include<bits/stdc++.h>
using namespace std;
typedef long long Int;

int f(int x, int y, int z) {
  int n = x*x + y*y + z*z + x*y + y*z + z*x;
  return n;
}

int main() {
  int N;
  cin >> N;
  map<int,int> m;
  for (int i = 1; i < N; i++) {
    for (int j = 1; j < N; j++) {
      for (int k = 1; k < N; k++) {
        int n = f(i,j,k);
        if (n > N) break;
        m[n]++;
      }
    }
  }

  for (int i = 1; i <= N; i++) {
    cout << m[i] << endl;
  }
}
