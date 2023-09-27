#include <bits/stdc++.h>

using namespace std;

template< typename T >
struct BinaryIndexedTree {
  vector< T > data;

  BinaryIndexedTree(int sz) {
    data.assign(++sz, 0);
  }

  T sum(int k) {
    T ret = 0;
    for(++k; k > 0; k -= k & -k) ret += data[k];
    return (ret);
  }

  void add(int k, T x) {
    for(++k; k < data.size(); k += k & -k) data[k] += x;
  }
};

int main() {
  int N, Q;
  scanf("%d %d", &N, &Q);
  BinaryIndexedTree< int > bit(N);
  while(Q--) {
    int T, X, Y;
    scanf("%d %d %d", &T, &X, &Y);
    if(T == 0) bit.add(X - 1, Y);
    else printf("%d\n", bit.sum(Y - 1) - bit.sum(X - 2));
  }
}
