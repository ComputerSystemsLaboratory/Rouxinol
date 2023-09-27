#include <algorithm>
#include <iostream>
#include <limits>
#include <stack>
#include <vector>
using namespace std;
using ll = long long;

// ----- LIS -----

template <typename T>
class LIS
{
  struct Cache_LIS
  {
    typename vector<T>::iterator it;
    T value;
  };

  int n; // fixed
  T infty;
  vector<T> dp;
  stack<Cache_LIS> st;

public:
  LIS() {}
  LIS(int n, T infty = numeric_limits<T>::max()) : n{n}, infty{infty}, dp(n, infty) {}

  T query(T a)
  {
    auto it{lower_bound(dp.begin(), dp.end(), a)};
    auto value{*it};
    st.push(Cache_LIS{it, value});
    *it = a;
    return lower_bound(dp.begin(), dp.end(), infty) - dp.begin();
  }

  bool rollback()
  {
    if (st.empty())
    {
      return false;
    }
    auto const &c{st.top()};
    *c.it = c.value;
    st.pop();
    return true;
  }

private:
};

#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D&lang=jp"

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto i{0}; i < n; ++i)
  {
    cin >> a[i];
  }
  LIS<int> lis(n);
  for (auto i{0}; i < n - 1; ++i)
  {
    lis.query(a[i]);
  }
  cout << lis.query(a[n - 1]) << endl;
}

