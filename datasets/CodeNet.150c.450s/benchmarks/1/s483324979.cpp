#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>
#define F first
#define S second
using namespace std;
typedef pair<int, int> P;
const int INF = 1 << 30, Array = int(1e5);
int main(){
  int n;
int seq[Array], dp[Array];
  scanf("%d", &n);
  fill(dp, dp + n, INF);
  for(int i = 0; i < n; i++)
    scanf("%d", &seq[ i ]);
  for(int i = 0; i < n; i++)
    *lower_bound(dp, dp + n, seq[ i ]) = seq[ i ];
  cout << lower_bound(dp, dp + n, INF) - dp << endl;
  return 0;
}