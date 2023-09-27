#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;

int main() {
  long long N; cin >> N;
  long long A[N]; for (int i = 0; i < N; i++) cin >> A[i];
  long long Q; cin >> Q;
  long long B[Q], C[Q]; for (int i = 0; i < Q; i++) cin >> B[i] >> C[i];
  
  long long num[1000000];
  long long count = 0;
  for (int i = 0; i < 1000000; i++) num[i] = 0;
  for (int i = 0; i < N; i++){
    num[A[i]]++;
    count += A[i];
  }
  for (int i = 0; i < Q; i++){
    count += num[B[i]] * (C[i] - B[i]);
    num[C[i]] += num[B[i]];
    num[B[i]] = 0;
    cout << count << endl;
  }
}