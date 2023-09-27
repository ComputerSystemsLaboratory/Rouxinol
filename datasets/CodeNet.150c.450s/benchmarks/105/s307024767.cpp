#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
struct LB {
  const static int L = 64; // insert(x) 0 <= x < (1 << L)
  ull a[L];
  LB() { this->init(); }
  void init() { memset(a, 0, sizeof a); }
  ull &operator[](const size_t &id) { return a[id]; }
  const ull &operator[](const size_t &id) const { return a[id]; }
  // 询问x是否在线性基中可以仿造下面的函数来写
  // 即将`return true;`上面三行删去 然后把返回值取反
  // 插入一个数x ==> obj(x) 一边插入一边高斯消元 O(L)
  bool count(ull x) {
    for(int i = L - 1; ~i; i--) {
      if((x >> i) & 1) {
        if(!a[i]) {
          return false;
        } else {
          x ^= a[i];
        }
      }
      if(!x) {
        return true;
      }
    }
    return false;
  }
  bool operator()(ull x) {
    for(int i = L - 1; ~i; i--) {
      if((x >> i) & 1) {
        if(!a[i]) {
          for(int j = 0; j < i; j++) if((x >> j) & 1) x ^= a[j];
          for(int j = i + 1; j < L; j++) if((a[j] >> i) & 1) a[j] ^= x;
          a[i] = x;
          return true;
        } else {
          x ^= a[i];
        }
      }
      if(!x) {
        return false;
      }
    }
    return true;
  }
  // 线性基求交 O(L^2)
  friend LB operator&(const LB &A, const LB &B) {
    LB C, D, E;
    for(int i = L - 1; ~i; i--) {
      if(A[i]) {
        C(A[i]);
        D[i] = 1ull << i;
      }
    }
    for(int i = 0; i < L; i++) {
      if(!B[i]) {
        continue;
      }
      bool can = true;
      ull v = 0, x = B[i];
      for(int j = L - 1; ~j; j--) {
        if((x >> j) & 1) {
          if(C[j]) {
            x ^= C[j], v ^= D[j];
          } else {
            can = false, C[j] = x, D[j] = v;
            break;
          }
        }
      }
      if(can) {
        ull m = 0;
        for(int j = L - 1; ~j; j--) {
          if((v >> j) & 1) {
            m ^= A[j];
          }
        }
        E(m);
      }
    }
    return E;
  }
  // 线性基求并 O(L^2)
  friend LB operator|(const LB &x, const LB &y) {
    LB z;
    for(int i = 0; i < L; i++) if(x[i]) z(x[i]);
    for(int i = 0; i < L; i++) if(y[i]) z(y[i]);
    return z;
  }
};
int main() {
  ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int T; cin >> T;
  while(T--) {
    int n; cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    LB o;
    string s; cin >> s;
    bool ok = false;
    for(int i = n - 1; i >= 0; i--) {
      if(s[i] == '0') {
        o(a[i]);
      } else {
        if(!o.count(a[i])) {
          ok = true;
          break;
        }
      }
    }
    cout << (ok ? "1\n" : "0\n");
  }
}