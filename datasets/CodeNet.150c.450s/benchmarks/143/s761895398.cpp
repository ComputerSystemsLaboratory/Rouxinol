#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long int;

int main() {
  int N;
  cin >> N;

  int temp;
  vector<ll> num(110000, 0);
  rep(i, N) {
    cin >> temp;
    num[temp]++;
  }

  ll output = 0;
  rep(i, 100001) {
    output += i * num[i];
  }

  int Q;
  cin >> Q;

  vector<ll> B(Q, 0);
  vector<ll> C(Q, 0);
  rep(i, Q) {
    cin >> B[i] >> C[i];
  }
  rep(i, Q) {
    output -= B[i] * num[B[i]];
    output += C[i] * num[B[i]];
    num[C[i]] += num[B[i]];
    num[B[i]] = 0;

    cout << output << endl;
  }
}