// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C&lang=jp
#include <iostream>
#include <vector>

using namespace std;

#define debug(x) cout << #x << "==" << x << endl;

const int inf = 100000000;

typedef long long ll;

// 素数判定 O(root(n))
bool is_prime(int n) {

  if(n == 1) {
    return false;
  }

  for(int i = 2; i * i <= n; i++) {
    if ( n % i == 0 ) 
      return false;
  }

  return true;

}


int main() {
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  int ans = 0;
  for(int i = 0; i < N; i++) { 
    int n;
    cin >> n;
    if( is_prime(n) ) { ans++; }
  }


  cout << ans << "\n";

  return 0;
}