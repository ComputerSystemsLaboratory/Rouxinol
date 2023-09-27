#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define REP(i,n) for(int i=0; i < (n); ++i)
#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
// #define INF 1e9
const ll INF = 1LL << 60;


int main(){
  int n;
  cin >> n;
  cout << n << ":";
  for(int i = 2; i * i <= n; i++){
    while(n % i == 0){
      cout << " " << i;
      n /= i;
    }
  }
  if(n != 1){
    cout << " " << n;
  }
  cout << endl;
  return 0;
}


