#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep2(i, x, n) for(int i = x, i##_len = (n); i < i##_len; ++i)
#define all(n) begin(n), end(n)
using ll = long long;
using P = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
using vc = vector<char>;
using vb = vector<bool>;
using vd = vector<double>;
vi dir = {-1, 0, 1, 0, -1, -1, 1, 1, -1};

const int MAX_ROW = 60;   // to be set appropriately
const int MAX_COL = 200;  // to be set appropriately
struct BitMatrix {
  int H, W;
  bitset<MAX_COL> val[MAX_ROW];
  BitMatrix(int m = 1, int n = 1) : H(m), W(n) {}
  inline bitset<MAX_COL> &operator[](int i) { return val[i]; }
};

int GaussJordan(BitMatrix &A, bool is_extended = false) {
  int rank = 0;
  for(int col = 0; col < A.W; ++col) {
    if(is_extended && col == A.W - 1) break;
    int pivot = -1;
    for(int row = rank; row < A.H; ++row) {
      if(A[row][col]) {
        pivot = row;
        break;
      }
    }
    if(pivot == -1) continue;
    swap(A[pivot], A[rank]);
    for(int row = 0; row < A.H; ++row) {
      if(row != rank && A[row][col]) A[row] ^= A[rank];
    }
    ++rank;
  }
  return rank;
}

int linear_equation(BitMatrix A, vector<int> b, vector<int> &res) {
  int m = A.H, n = A.W;
  BitMatrix M(m, n + 1);
  for(int i = 0; i < m; ++i) {
    for(int j = 0; j < n; ++j) M[i][j] = A[i][j];
    M[i][n] = b[i];
  }
  int rank = GaussJordan(M, true);

  // check if it has no solution
  for(int row = rank; row < m; ++row)
    if(M[row][n]) return -1;

  // answer
  res.assign(n, 0);
  for(int i = 0; i < rank; ++i) res[i] = M[i][n];
  return rank;
}

int main() {
  ll t;
  cin >> t;
  rep(_, t) {
    ll n;
    cin >> n;
    vl a(n);
    string s;
    rep(i, n) cin >> a[i];
    cin >> s;
    vl dp;
    bool ans = false;
    for(int i = n - 1; i >= 0; i--) {
      ll m = dp.size();
      if(s[i] == '0')
        dp.push_back(a[i]);
      else {
        if(m == 0)
          ans = true;
        else {
          BitMatrix bm(MAX_ROW, m);
          vi b(MAX_ROW), res;
          rep(j, m) rep(k, MAX_ROW) bm[k][j] = (dp[j] >> k & 1);
          rep(k, MAX_ROW) b[k] = (a[i] >> k & 1);
          int rank = linear_equation(bm, b, res);
          if(rank == -1) ans = true;
        }
      }
    }
    cout << ans << '\n';
  }
}