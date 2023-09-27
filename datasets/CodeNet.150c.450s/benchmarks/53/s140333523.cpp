#include <bits/stdc++.h>
#define ALL(a)  (a).begin(),(a).end()
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<long long, long long> Pll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
template <typename T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template <typename T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

template<typename T>
bool is_prime(T n){
  for(int i = 2; i * i < n; i++){
    if(n % i == 0) return false;
  }
  return n != 1;
}

int main(){
  int n;
  cin >> n;
  cout << n << ':';
  if(is_prime(n)){
    cout << ' ' <<  n << endl;
    return 0;
  }
  int i = 2;
  while(n != 1){
    while(n % i == 0){
      cout << ' ' << i;
      n /= i;
    }
    i++;
  }
  cout << endl;
}
