#ifndef Local
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx")
#endif

#include <bits/stdc++.h>

#include <ext/numeric>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;

#define popCnt(x) (__builtin_popcountll(x))
#define sz(x) ((int)(x.size()))
#define all(v) begin(v), end(v)
typedef long long Long;
typedef double Double;

template <class T>
istream& operator>>(istream& is, vector<T>& v) {
  for (auto& x : v) {
    is >> x;
  }
  return is;
}

template <class T>
ostream& operator<<(ostream& os, vector<T>& v) {
  for (auto& x : v) {
    os << x << " ";
  }
  return os;
}

bool isSet(Long n, int b) { return (n >> b) & 1LL; }

void printRow(int x) { cout << bitset<5>(x).to_string() << endl; }

void printMat(const vector<Long>& mat) {
  for (auto& x : mat) {
    printRow(x);
  }
}

vector<Long> getRREF(const vector<Long>& mat) {
  vector<Long> res = mat;
  int rank = 0;
  for (int row = 0, col = 63; row < res.size() && col >= 0; --col) {
    for (int i = row; i < res.size(); ++i) {
      if (isSet(res[i], col)) {
        swap(res[row], res[i]);
        break;
      }
    }
    if (!isSet(res[row], col)) continue;
    ++rank;
    for (int i = 0; i < res.size(); ++i) {
      if (i == row) continue;
      if (isSet(res[i], col)) {
        res[i] ^= res[row];
      }
    }

    ++row;
  }

  return {begin(res), begin(res) + rank};
}

int getRank(const vector<Long>& mat) {
  int res = 0;
  for (auto& x : mat) {
    res += (x != 0);
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifdef Local
  freopen("test.in", "r", stdin);
#else
#define endl '\n'
#endif

  int t;
  cin >> t;

  vector<Long> a;

  string s;
  while (t--) {
    int n;
    cin >> n;
    a.resize(n);
    cin >> a;
    cin >> s;
    vector<Long> zeroes;
    vector<Long> all;
    bool winner = 0;
    for (int i = sz(s) - 1; i >= 0; --i) {
      if (s[i] == '0') {
        zeroes.emplace_back(a[i]);
      }
      all.emplace_back(a[i]);
      zeroes = getRREF(zeroes);
      all = getRREF(all);
      if (getRank(zeroes) != getRank(all)) {
        winner = 1;
        break;
      }
    }
    cout << winner << endl;
  }

  return 0;
}