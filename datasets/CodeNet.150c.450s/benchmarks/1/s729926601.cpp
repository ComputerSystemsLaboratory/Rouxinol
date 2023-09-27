#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
const long int NMAX = 100010, INF = 10000000023;
long int dp[NMAX];
long int a[NMAX];

int main() {
  int n;
  cin >> n;
  REP(i, n) {
    cin >> a[i];
  }

  REP(i, n+1) {
    dp[i] = INF;
  }

  for (int i = 0; i < n; i++) {
    int j = 0;
    long int* p = lower_bound(dp, dp + n, a[i]);
    *p = a[i];
  }

  long int* p = lower_bound(dp, dp + n, INF);
  cout << p - dp << endl;
}