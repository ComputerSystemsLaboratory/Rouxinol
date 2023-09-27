#if 0

#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int N;
int A[100010];
vector<int> B(100010);

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];
  int l = 0;
  B[l] = A[0];
  for (int i = 1; i < N; i++) {
    if (A[i] > B[l]) {
      B[l+1] = A[i];
      l++;
    }
    else {
      auto it = lower_bound(B.begin(), B.begin()+l, A[i]);
      //cout << it-B.begin() << endl;
      B[it-B.begin()] = A[i];
    }
    //cout << 'e' << B[l] << endl;
  }
  cout << l+1 << endl;
}

