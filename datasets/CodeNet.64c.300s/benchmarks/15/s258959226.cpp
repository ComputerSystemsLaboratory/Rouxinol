#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
  int N,A[100],count = 0;;
  
  cin >> N;
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }

  for (int i=0;i<N;i++) {
    int minj = i;
    for (int j=i;j<N;j++) {
      if (A[j] < A[minj]) {
        minj = j;
      }
    }
    if (i != minj) {
      int tmp = A[i];
      A[i] = A[minj];
      A[minj] = tmp;
      count++;
    }

  }

  for (int i=0;i<N-1;i++) {
    cout << A[i] << " ";
  }
  cout << A[N-1] << endl;
  cout << count << endl;
}