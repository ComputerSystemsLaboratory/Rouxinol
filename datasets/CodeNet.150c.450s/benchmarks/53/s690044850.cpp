#include <bits/stdc++.h>

using namespace std;

map< int64_t, int > prime_factor(int64_t n) {
  map< int64_t, int > ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}

template<class T>
map<T,int> prime_factor(T n){
  map<T,int> ret;
  for(T i=2; i*i<=n; ++i){
    while(n%i == 0){
      n /= i;
      ++ret[i];
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}

int main() {
  int N;
  cin >> N;
  cout << N << ":";
  for(auto p : prime_factor<int>(N)) {
    while(p.second--) cout << " " << p.first;
  }
  cout << endl;
}
