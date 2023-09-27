#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
  int A[100],N;

  cin >> N;
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }

  int count = 0;
  int flag = 1;
  while(flag) {
    flag = 0;
    for (int i=N-1;i>0;i--) {
      if (A[i] < A[i-1]) {
        count++;
        int tmp = A[i];
        A[i] = A[i-1];
        A[i-1] = tmp;
        flag = 1;
      }
    }
  }
  
  for (int i=0;i<N-1;i++) {
    cout << A[i] << " ";
  }
  cout << A[N-1] << endl;
  cout << count << endl;
}