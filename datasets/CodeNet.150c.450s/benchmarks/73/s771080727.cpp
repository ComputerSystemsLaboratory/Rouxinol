#include <bits/stdc++.h>
using namespace std;


class RangeSumQuery {
private:
  int* tree;
public:
  int size;
  RangeSumQuery(int n) {
    size = 1; while(size < n) size *= 2;
    tree = new int[2*size - 1];
    for (int i=0; i < 2*size - 1; i++) tree[i] = 0;
  }
  void add(int i, int x);
  long long int getSum(int s, int t, int i, int l, int r);
};

void RangeSumQuery::add(int i, int x) {
  i += size - 1;

  tree[i] += x;
  while (i > 0) {
    i = (i - 1) / 2;
    tree[i] = tree[2*i+1] + tree[2*i+2];
  }
}

long long int RangeSumQuery::getSum(int s, int t, int i, int l, int r) {
  if (r < s || t < l) return 0;
  if (s <= l && r <= t) return tree[i];

  int vl = getSum(s, t, 2*i+1, l, (l+r)/2);
  int vr = getSum(s, t, 2*i+2, (l+r)/2+1, r);
  return vl + vr;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);  
  int n, q;
  int com, x, y;
  cin >> n >> q;

  RangeSumQuery rsq(n);
  
  for (int i=0; i<q; i++) {
    cin >> com >> x >> y;
    if (com == 0) {
      rsq.add(x-1, y);
    } else {
      cout << rsq.getSum(x-1, y-1, 0, 0, rsq.size - 1) << '\n';
    }
  }
  return 0;
}