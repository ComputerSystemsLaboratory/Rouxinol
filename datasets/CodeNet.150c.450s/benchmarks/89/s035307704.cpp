#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_N 1000001
using namespace std;

vector<bool> p(MAX_N);
int a, d, n;

bool isPrime(int x){
  if(x <= 1) return false;

  for(int i = 2; i * i <= x; ++i) {
    if(x % i == 0) return false;
  }
  return true;
}

int solve() {
  int cnt = 0;
  for(int i = 0;; ++i) {
    int nx = a + i * d;
    if(nx > 2 && nx % 2 == 0) continue;
    if(p[nx]) cnt++;

    if(cnt == n) return nx;
  }
}

int main() {
  for(int i = 0; i < MAX_N; ++i) {
    if(isPrime(i)) p[i] = true;
    else p[i] = false;
  }
  while(cin >> a >> d >> n && a && d && n) {
    cout << solve() << endl;
  }
  return 0;
}

