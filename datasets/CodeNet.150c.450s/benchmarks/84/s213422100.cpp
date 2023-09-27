#include <bits/stdc++.h>
using namespace std;

template <typename T>
class FenwickTree
{
public:
  int N;
  vector<T> dat;

  FenwickTree(int n, T m = 0)
  {
    init(n, m);
  }

  void init(int n, int m)
  {
    N = n;
    dat.resize(n + 1);
    for (int i = 0; i < dat.size(); i++)
    {
      dat[i] = m;
    }
  }

  int64_t sum(int i)
  {
    T s = 0;
    while (i > 0)
    {
      s += dat[i];
      i -= i & -i;
    }
    return s;
  }

  void add(int i, T x)
  {
    while (i <= N)
    {
      dat[i] += x;
      i += i & -i;
    }
  }
};

int main()
{
  int n;
  cin >> n;
  vector<int64_t> A(n);
  for (int i = 0; i < n; i++)
  {
    cin >> A.at(i);
  }
  vector<int64_t> copy = A;
  map<int64_t, int64_t> mp;
  sort(copy.begin(), copy.end());
  copy.erase(unique(copy.begin(), copy.end()), copy.end());
  int m = copy.size();
  for (int i = 0; i < m; i++)
  {
    mp[copy[i]] = i + 1;
  }
  for (int i = 0; i < n; i++)
  {
    A[i] = mp[A[i]];
  }
  int64_t ans = 0;
  FenwickTree<int64_t> ft(m + 1);
  for (int i = 0; i < n; i++)
  {
    ans += i - ft.sum(A[i]);
    ft.add(A[i], 1);
  }
  cout << ans << endl;
}
