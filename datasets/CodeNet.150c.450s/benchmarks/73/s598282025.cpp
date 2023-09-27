#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
typedef long long ll;
int A[MAXN];
int n;

void init(int n) {
  for (int i=1; i<=n; i++) {
    A[i] = 0;
  }
}
void add(int i,int x) {
  while (i<=n) {
    A[i] += x;
    i += i & -i;
  }
}
ll getSum(int i) {
  ll ret = 0;
  while (i) {
    ret += A[i];
    i -= i & -i;
  }
  return ret;
}
int main() {
  int q;
  cin >> n >> q;
  init(n);
  while (q--) { 
    int com, x, y;
    cin >> com >> x >> y;
    if (com==0) {
      add(x,y);
    } else {
      ll ans = getSum(y)-getSum(x-1);
      cout << ans << endl;
    }
  }
  return 0;
}