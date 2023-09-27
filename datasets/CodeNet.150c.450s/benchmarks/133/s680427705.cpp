#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <cstdint>
#include <cmath>
#include <bitset>
#include <string>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

#define N_TIMES(i, n)     for ( uint64_t i = 0;     i <  n; ++i )
#define N_TIMES_REV(i, n) for (  int64_t i = n - 1; i >= 0; --i )

template<typename T> using maximum_heap = std::priority_queue<T, std::vector<T>, std::less<T>>;
template<typename T> using minimum_heap = std::priority_queue<T, std::vector<T>, std::greater<T>>;

template<typename T>
std::istream& operator>>(std::istream &is, std::vector<T> &v)
{
  for (typename std::vector<T>::size_type i = 0; i < v.size(); ++i) {
    is >> v[i];
  }
  return is;
}

using namespace std;

const uint64_t M = 26;

int main()
{
  uint64_t D;
  cin >> D;

  vector<int64_t> c(M);
  cin >> c;

  vector<vector<int64_t>> s(D, vector<int64_t>(M));
  N_TIMES(d, D) {
    cin >> s[d];
  }

  vector<int64_t> t(D);
  cin >> t;

  vector<int64_t> last(M, 0);
  int64_t S = 0;
  N_TIMES(d, D) {
    S += s[d][t[d] - 1];
    last[t[d] - 1] = d + 1;
    N_TIMES(m, M) {
      S -= c[m] * ((d + 1) - last[m]);
    }
    cout << S << endl;
  }

  return 0;
}