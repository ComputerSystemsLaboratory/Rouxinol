#include <bits/stdc++.h>
#define For(i, a, b) for(int (i)=(a); (i)<(b); (i)++)
#define rFor(i, a, b) for(int (i)=(a)-1; (i)>=(b); (i)--)
#define rep(i, n) For((i), 0, (n))
#define rrep(i, n) rFor((i), (n), 0)
using namespace std;
typedef long long lint;

template<class T> struct SegTree{
  int n;
  vector<T> node;
  T initv;
  
  SegTree(int n_, T initv_){
    n = 1;
    while(n < n_) n *= 2;
    node.resize(n*2-1);
    initv = initv_;
    rep(i, n*2-1) node[i] = initv;
  }
  
  void update(int i, T val){
    i += n - 1;
    node[i] += val;
    while(i > 0) i = (i-1) / 2, node[i] = node[i*2+1] + node[i*2+2];
  }
  
  T getsum(int a, int b, int i, int l, int r){
    if(r<=a || b<=l) return initv;
    if(a<=l && r<=b) return node[i];
    T vl = getsum(a, b, i*2+1, l, (l+r)/2);
    T vr = getsum(a, b, i*2+2, (l+r)/2, r);
    return vl + vr;
  }
};

int main(){
    int n, q; cin >> n >> q;
    SegTree<int> st(n, 0);
    rep(i, q){
        int c, x, y; cin >> c >> x >> y;
        if(c) cout << st.getsum(x-1, y, 0, 0, st.n) << endl;
        else st.update(x-1, y);
    }
}
