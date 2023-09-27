#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <utility>
#include <vector>
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

using namespace std;

template<typename T>
class Bit {
  public:
    Bit(int size, T z): N(size), zero(z), bit(size+1, z) {
    }

    // [1,k]
    T sum(int k) const {
      T s = zero;
      for (int i = k; i > 0; i -= i&(-i)) {
        s += bit[i];
      }
      return s;
    }

    // [l,r)
    T sum(int l, int r) const {
      return sum(r-1) - sum(l-1);
    }

    void add(int k, T x) {
      for (int i = k; i <= N; i += i&(-i)) {
        bit[i] += x;
      }
    }

  private:
    int const N;
    T const zero;
    std::vector<T> bit;
};

int main() {
  int N, Q;
  cin >> N >> Q;
  Bit<int> bit(N, 0);
  REP(i, Q) {
    int COM, X, Y;
    cin >> COM >> X >> Y;
    if (COM) {
      cout << bit.sum(X, Y+1) << endl;
    } else {
      bit.add(X, Y);
    }
  }
  return 0;
}

