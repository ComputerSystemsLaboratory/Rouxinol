#if 0

#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int A[30+10];
int N;

int main() {
  A[0] = 1; A[1] = 1; A[2] = 2;
  for (int i = 3; i <= 30; i++) {
    A[i] = A[i-1] + A[i-2] + A[i-3];
  }
  while (cin >> N && N) {
    cout << (((A[N]+10-1)/10)+365-1)/365 << endl;
  }
}

