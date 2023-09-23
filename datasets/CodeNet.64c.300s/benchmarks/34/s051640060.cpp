#include<bits/stdc++.h>
#define int long long

using namespace std;

static int MAX = 1000;

signed main(){
  int N, A[MAX];
  
  cin >> N;
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }

  for (int i=1;i<N;i++) {
    for (int k=0;k<N-1;k++) {
      cout << A[k] << " ";
    }
    cout << A[N-1] << endl;

    int v = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j + 1] = A[j];
      j--;
      A[j+1] = v;
    }
  }

  for (int k=0;k<N-1;k++) {
    cout << A[k] << " ";
  }
  cout << A[N-1] << endl;
}