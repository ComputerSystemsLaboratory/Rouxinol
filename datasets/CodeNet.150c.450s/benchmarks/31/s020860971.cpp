#include <bits/stdc++.h>
using namespace std;
#define REP(asd, fgh) for(int asd = 0; asd < fgh; asd++)
#define MAX_N 200000

int main(void){
  int n;
  int a[MAX_N];
  int m = INT_MAX;
  int ans = INT_MIN;
  cin >> n;
  REP(i, n){
    cin >> a[i];
  }

  for(int i = 1; i < n; i++){
    m = min(m, a[i-1]);
    ans = max(ans, a[i] - m);
  }

  cout << ans << endl;

  return 0;
}