#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N;
  long long sum = 0;
  vector<long long> num(110000, 0);
  for (int i = 0; i < N; ++i) {
    long long A;
    cin >> A;
    sum += A;
    num[A]++;
  }

  cin >> Q;
  for (int i = 0; i < Q; ++i) {
    long long B, C;
    cin >> B >> C;
    sum += (C - B) * num[B];
    num[C] += num[B];
    num[B] = 0;
    cout << sum << endl;
  }
}
