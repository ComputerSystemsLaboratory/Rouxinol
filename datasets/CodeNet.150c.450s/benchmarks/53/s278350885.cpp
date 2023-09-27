#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
template<class T>inline bool chmax(T &a, const T &b){if(a < b){a = b; return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if(a > b){a = b; return 1;}return 0;}
typedef long long ll;

bool isPrime(int n){
  if(n <= 1) return false;
  if(n == 2) return true;
  if(n % 2 == 0) return false;
  for(int i = 3; i*i <= n; i += 2){
    if(n % i == 0) return false;
  }
  return true;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  // 素因数分解をする
  int n; cin >> n;
  cout << n << ":";
  if(isPrime(n)){
    cout << " " << n << endl;
    return 0;
  }
  while(n % 2 == 0){
    cout << " " << 2;
    n /= 2;
  }
  int i = 3;
  while(n > 1){
    if(n % i == 0){
      cout << " " << i;
      n /= i;
    }else{
      i += 2;
    }
  }
  cout << endl;
}
