#include <bits/stdc++.h>
using namespace std;

#define rep(i,j,n) for(int i=j;i<n;++i)
#define all(i) i.begin(),i.end()
#define rall(i) i.rbegin(), i.rend()
#define INF 1e9
#define LINF 1e18
const int mod = 1e9 + 7;

typedef long long i64;
typedef pair<int, int> pi;

template <class T> using vt = vector<T>;
template <class T> using vvt = vector<vector<T>>;

i64 gcd(i64 n, i64 m) {return (m == 0? n : gcd(m, n % m));}
i64 lcd(i64 n, i64 m) {return (n / gcd(n, m) * m);}
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

template <class T> class BinaryIndexedTree {
  private:
    int n;
    std::vector<T> bit;

  public:
    BinaryIndexedTree(int node) : n(node), bit(node + 1, 0) {}

    inline T sum(int i) {
      ++i;
      T s = 0;
      while(i > 0) {
        s += bit[i];
        i -= i & -i;
      }
      return s;
    }

    inline T sum(int a, int b) {
      return sum(b) - sum(a - 1);
    }

    inline void add(int i, T x) {
      ++i;
      while(i <= n) {
        bit[i] += x;
        i += i & -i;
      }
    }

    int get(long long k) {
      ++k;
      int res = 0, N = 1;
      while(N < bit.size()) N *= 2;
      for(int i = N / 2; i > 0; i /= 2) {
        if(res + i < bit.size() && bit[res + i] < k) {
          k -= bit[res + i];
          res += i;
        }
      }
      return res + 1;
    }
};


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, q;
  cin >> n >> q;
  BinaryIndexedTree<int> bit(n);
  rep(i, 0, q) {
    int c, x, y;
    cin >> c >> x >> y;
    if(c == 0) bit.add(x - 1, y);
    else cout << bit.sum(x - 1, y - 1) << endl;
  }
}
