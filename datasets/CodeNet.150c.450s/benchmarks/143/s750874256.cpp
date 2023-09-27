#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x;
  int64_t sum=0;
  cin >> N;
  vector<int> vec(100001);
  for (int i = 0; i < 100001; i++) {
    vec.at(i)=0;
  }
  for (int i = 0; i < N; i++) {
    cin >> x;
    vec.at(x)++;
    sum+=x;
  }
  int Q;
  cin >> Q;
  int B, C;
  for (int i=0; i < Q; i++){
    cin >> B >> C;
    sum += (C-B)*vec.at(B);
    vec.at(C) += vec.at(B);
    vec.at(B)=0;
    cout << sum << endl;
  }
}
