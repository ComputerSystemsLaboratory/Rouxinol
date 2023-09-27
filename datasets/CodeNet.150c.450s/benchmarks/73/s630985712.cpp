#include <bits/stdc++.h>
using namespace std;
const int MAXN=100010;
typedef long long ll;
int A[MAXN];
int n;

void init(int n) {
  for (int i=1; i<=n;i++) {
    A[i]=0;
  }
}
void add(int i,int x) {
  while (i<=n) {
    A[i]+=x;
    i+=i&(-i);
  }
}
ll getSum(int s,int t) {
  ll sumt=0;
  while (t) {
    sumt+=A[t];
    t-=t&(-t);
  }
  ll sums=0;
  s-=1;
  while (s) {
    sums+=A[s];
    s-=s&(-s);
  }
  ll sum=sumt-sums;
  return sum;
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
      cout << getSum(x,y) << endl; 
    }
  }
  return 0;
}