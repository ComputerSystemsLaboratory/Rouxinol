#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, K;
  cin >> N >> K;
  vector<long long> S(N);
  for(int i = 0; i < N; i++) {
    cin >> S.at(i);
  }
  int st = 0;
  int en = 0 + K;
  for(int i = 0; i < N - K; i++) {
    if(S.at(st) >= S.at(en)) {
      cout << "No" << endl;
    }
    else {
      cout << "Yes" << endl;
    }
    st++;
    en++;
  }
}