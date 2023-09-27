#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K;
  cin >> N >> K;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  for (int i = K; i < N; i++) {
    if(vec.at(i-K)<vec.at(i)){
      cout << "Yes" <<endl;
    }
    else{
      cout << "No" <<endl;
    }
  }
}