#include <iostream>
using namespace std;

const int NUM = 1000000;

int main() {
  int n;
  bool isPrime[NUM];
  int dp[NUM];
  for (int i=0;i<NUM;i++) {
    isPrime[i] = 1;
    dp[i] = 0;
  }
  isPrime[0] = isPrime[1] = 0;
  for (int i=2;i<NUM;i++) {
    if (isPrime[i]) {
      dp[i] = 1;
      for (int j=i*2;j<NUM;j+=i) {
        isPrime[j] = 0;
      }
    }
  }
  for (int i=1;i<NUM;i++) {
    dp[i] += dp[i-1];
  }

  while (cin >> n) {
    cout << dp[n] << endl;
  }
  return 0;
}