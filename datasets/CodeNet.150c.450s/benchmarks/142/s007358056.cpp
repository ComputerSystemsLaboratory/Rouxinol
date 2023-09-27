#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#define ll long long
#include <unordered_map>
using namespace std;
 
int main() {
  ll N, K, point = 1;
  cin >> N >> K;
  vector<ll> A(N);
  for(ll i = 0; i < N; i++) {
    cin >> A.at(i);
    if(i >= K) {
      if(A.at(i) > A.at(i - K)) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
}