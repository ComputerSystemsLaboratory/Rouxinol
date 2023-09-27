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

template<typename T, int size>
class Bit {
  public:
    Bit(T z): zero(z) {
      for (int i = 0; i <= N; ++i) {
        bit[i] = zero;
      }
    }

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
    int const N = size;
    T const zero;
    std::array<T, size+1> bit;
};

int main() {
  Bit<int, 100100> bit(0);
  int N, Q;
  cin >> N >> Q;
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

