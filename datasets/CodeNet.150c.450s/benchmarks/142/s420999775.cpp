#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long MOD = 1e9+7;

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for(int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for(int i = K; i < N; i++) {
    if(A[i - K] < A[i]) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}
