#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int A[128],N;
int main() {
  while(cin>>N && N>0) {
  A[0] = 1;
    for (int i=1; i<=N; ++i) {
      A[i] = A[i-1];
      if(i>=2) A[i] += A[i-2];
      if(i>=3) A[i] += A[i-3];
    }
    cout << ceil(A[N]/3650.0) << endl;
  }
}