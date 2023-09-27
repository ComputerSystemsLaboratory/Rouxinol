#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

#define MAX_N 30

ll memo[MAX_N];
ll res(int n) {
  if(n < 0) return 0;
  if(n == 0) return memo[n] = 1;
  if(n > 0) {
    if(memo[n] != 0) {
      return memo[n];
    }
    else {
      return memo[n] = res(n-3) + res(n-2) + res(n-1);
    }
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  while(cin >> n) {
    if( n == 0 ) break;
    ll combo = res(n);
    ll year = (combo / 10) / 365 + 1;
    cout << year << endl;
  }
}