#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
#define repn(i,s,n) for (int i=int(s); i < int(n); i++)
#define rep(i,n) repn(i,0,n)
#define repd(i,n) for (int i=int(n)-1; i >= 0; i--)


struct Node {
  int val;  // この区間に足される値
  int min;  // この区間の最小値（valを含む）
  int sum;  // この区間の値の和（valを含む）
  Node() : min(0), val(0), sum(0) {}
};

#define LC(k) (k * 2 + 1)  // 左の子
#define RC(k) (k * 2 + 2)  // 右の子

const int INF = INT_MAX;

struct RMQRangeAddSumSegTree {
  vector<Node> tree;
  int n;
  RMQRangeAddSumSegTree(int n) : n(n), tree(n*2 - 1) {}  // nは2のべき乗でなければならない

  // 区間[l,r)内の要素にvalを足す
  void addRange(int l, int r, int val) {
    addRange(l, r, 0, 0, n, val);
  }

  // a,b: クエリ対象の範囲[a,b)
  // k: 現在のノードの番号
  // l,r: 現在のノードkの範囲[l,r)
  // val: [a,b)に追加する値
  void addRange(int a, int b, int k, int l, int r, int val) {
    if (r <= a || b <= l) return;  // 対象区間とノードの区間が交わらないなら処理をしない
    process_lazy(k, r-l);
    if (a <= l && r <= b) {
      tree[k].val += val;
    }
    else {
      addRange(a, b, LC(k), l, (l + r) / 2, val);
      addRange(a, b, RC(k), (l + r) / 2, r, val);
    }
    update_node(k, r-l);
  }

  // 遅延評価の実行。根ノード側の更新分を下へ伝搬していく
  void process_lazy(int k, int size) {
    if (size > 1 && tree[k].val != 0) {
      tree[LC(k)].val += tree[k].val;
      tree[RC(k)].val += tree[k].val;
      tree[LC(k)].min += tree[k].val;
      tree[RC(k)].min += tree[k].val;
      tree[LC(k)].sum += tree[k].val * (size / 2);
      tree[RC(k)].sum += tree[k].val * (size / 2);
      tree[k].val = 0;
    }
  }

  // 頂点情報の更新。葉ノード側の更新を上へ伝搬していく
  void update_node(int k, int size) {
    if (size > 1) {  // kは葉でない
      tree[k].min = tree[k].val + min(tree[LC(k)].min, tree[RC(k)].min);
      tree[k].sum = tree[k].val*size + tree[LC(k)].sum + tree[RC(k)].sum;
    }
    else {  // kは葉
      tree[k].min = tree[k].sum = tree[k].val;
    }
  }

  // 区間[l,r)内の要素の最小値を返す
  int minRange(int l, int r) {
    return minRange(l, r, 0, 0, n);
  }

  int minRange(int a, int b, int k, int l, int r) {
    if (r <= a || b <= l) return INT_MAX;
    process_lazy(k, r-l);
    if (a <= l && r <= b) return tree[k].min;
    return min(
      minRange(a, b, LC(k), l, (l + r) / 2),
      minRange(a, b, RC(k), (l + r) / 2, r)
    );
  }

  // 区間[l,r)内の要素の和を返す
  int sumRange(int l, int r) {
    return sumRange(l, r, 0, 0, n);
  }

  int sumRange(int a, int b, int k, int l, int r) {
    if (r <= a || b <= l) return 0;
    process_lazy(k, r-l);
    if (a <= l && r <= b) return tree[k].sum;
    return sumRange(a, b, LC(k), l, (l + r) / 2) +
           sumRange(a, b, RC(k), (l + r) / 2, r);
  }
};


int main() {

  int n, q;
  cin >> n >> q;
  int nPow2 = n-1;
  nPow2 |= nPow2 >> 1;
  nPow2 |= nPow2 >> 2;
  nPow2 |= nPow2 >> 4;
  nPow2 |= nPow2 >> 8;
  nPow2 |= nPow2 >> 16;
  nPow2++;

  RMQRangeAddSumSegTree segtree(nPow2);
  rep(qi, q) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      // add(x,y)
      x--;
      segtree.addRange(x, x+1, y);
    }
    else {
      // getSum(x,y)
      x--;
      y--;
      cout << segtree.sumRange(x, y+1) << endl;
    }
  }
  return 0;
}