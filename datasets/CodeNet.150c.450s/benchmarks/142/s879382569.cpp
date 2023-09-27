#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K;
  cin >> N >> K;
  vector<long long>data(N);
  for(int i=0; i<N; i++) {
    cin >> data.at(i);
  }
  for(int i=0; i<N-K; i++) {
    if (data.at(i) >= data.at(i+K)) {
      cout << "No" << endl;
    }
    else {
      cout << "Yes" << endl;
    }
  }
}